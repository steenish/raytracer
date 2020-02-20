using namespace std;

int main() {
  // Save command line arguments:
  // - Scene file path.
  // - Output picture path.
  // - Number of samples per pixel.
  // - Dimensions of output picture is not specified, it is always 640x480.

  // Parse scene file:
  // - Use JSON specification of the scene.
  // - Objects are read, including their geometry and their material.
  // - Materials should define a BSDF...
  // - A camera should not be specified, it is always placed at origin pointing in a positive z-direction.
  // - Put object objects into a scene object.

  // Run main rendering loop:
  // - Initialize the internal picture representation.
  // - For each pixel, run the recursive rendering a number of times.
  // - Write the picture file to the output path.
}
