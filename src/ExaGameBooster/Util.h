#pragma once
std::string wchar2string(wchar_t* str);

void HideConsole();

void ShowConsole();

bool IsConsoleVisible();

bool isEqualTo(const std::string& a, const std::string& b);

int CheckUpdate();