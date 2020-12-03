#include "pch.h"
#include "MyForm.h"

using namespace System;
using namespace $safeprojectname$;

int main() {
  // See why: https://stackoverflow.com/a/6764245
  Application::EnableVisualStyles();
  // See why: https://stackoverflow.com/a/18115466
  Application::SetCompatibleTextRenderingDefault(false);
  // Initialize MyForm
  Application::Run(gcnew MyForm);

  return 0;
}
