from conan import ConanFile
from conan.tools.cmake import cmake_layout


class ExampleRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def requirements(self):
        self.requires("openssl/3.2.1") 
        self.requires("libcurl/8.6.0")
        #self.requires("cunit/2.1-3")

    def layout(self):
        cmake_layout(self)

