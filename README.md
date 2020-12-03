# Windows Forms App Project Template

## Why

At my college, we must use Windows Forms a lot. Unfortunately, Microsoft does not provide a template to work using Windows Forms in C++/CLI. They only provide a template for C#. My teacher at that time said in a class that Microsoft should fix the developer experience for this. The thing is, C++/CLI has not received updates since 2005, so I do not think they are going to bother with this.

That is when I started my research if this was possible. After [reading] [literally] [lots] [of] [documentation] [from] [Microsoft] (yes, I even read their [icon creation guidelines][1]), I was able to pull off this basic project that works to create a basic Windows Forms project using C++/CLI.

## How to use it

- Download the [latest release](https://github.com/dalbitresb12/winformscpp-template/releases/latest "latest release") from GitHub.
- Double click the `.vsix` file and install it.
- ????
- Profit

## For developers

So, you want to compile your own version of this?

- First, check that you have downloaded all the [requirements](#Requirements).
- Read the documentation from Microsoft
- Change what you want
- Open the solution file in Visual Studio.
- Hit compile.
- Use the `.vsix` file located under `.\TemplateVSIX\bin\Debug` (or `.\TemplateVSIX\bin\Release`).

_That's it?_ **Yes**.

### Requirements

- [Visual Studio 2019](https://visualstudio.microsoft.com/)
- Visual Studio SDK
- .NET Framework v4.7.2
- [7-zip](https://www.7-zip.org/)

### Why is 7-zip needed

I used their CLI to automate the creation of the ZIP needed by the project to compile the template into a VSIX. Using this, I'm able to update all the files inside the ZIP using the new files from the `.\BaseProject` folder in every re-build.

## License

This repository is licensed under the [MIT](LICENSE.txt) license.

[reading]: https://docs.microsoft.com/en-us/visualstudio/ide/specifying-custom-build-events-in-visual-studio?view=vs-2019 "Specify custom build events in Visual Studio"

[literally]: https://docs.microsoft.com/en-us/visualstudio/extensibility/getting-started-with-the-vsix-project-template?view=vs-2019 "Get started with the VSIX Project template"

[lots]: https://docs.microsoft.com/en-us/visualstudio/ide/how-to-create-project-templates?view=vs-2019 "How to: Create project templates"

[of]: https://docs.microsoft.com/en-us/visualstudio/ide/how-to-substitute-parameters-in-a-template?view=vs-2019 "How to: Substitute parameters in a template"

[documentation]: https://docs.microsoft.com/en-us/visualstudio/extensibility/visual-studio-template-schema-reference?view=vs-2019 "Visual Studio template schema reference"

[from]: https://docs.microsoft.com/en-us/visualstudio/extensibility/visual-studio-template-manifest-schema-reference?view=vs-2019 "Visual Studio template manifest schema reference"

[Microsoft]: https://docs.microsoft.com/en-us/visualstudio/ide/template-parameters?view=vs-2019 "Template parameters"

[1]: https://docs.microsoft.com/en-us/visualstudio/extensibility/ux-guidelines/images-and-icons-for-visual-studio?view=vs-2019 "Images and Icons for Visual Studio"
