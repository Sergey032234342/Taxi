#include "MainForm1.h"

using namespace System;
using namespace System::Windows::Forms; //пространства имен нужны чтобы описать правильный функционал программ для нашей ИС


[STAThreadAttribute] //прописываем атрибуты - доп инфа, этот означает, что мы главную функцию будем запускать в отдельном потоке данных
int main(array<String^>^ args) { //создаем массив, ^^ - нужны для атвоматитической очистки памяти
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles(); // говорим что подключаем раздичные визуальные стили
	ISTax::MainForm1 form; //этот объект мы будем первым запскать при создании нашего проекта
	Application::Run(% form); //этот объект мы будем первым запскать при создании нашего проекта

} 

