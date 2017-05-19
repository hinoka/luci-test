
DEPS = [
  "recipe_engine/step",
  "recipe_engine/context",
  "recipe_engine/path",
  "depot_tools/git",
]

def RunSteps(api):
  api.git.checkout("https://github.com/hinoka/luci-test")
  workdir = api.path['start_dir'].join("luci-test")
  with api.context(cwd=workdir):
    api.step("Build", ["make", "build"])
    api.step("Run with 20", [workdir.join("a.out"), "20"])


def GenTests(api):
  yield api.test("basic")
