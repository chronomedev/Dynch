#pragma once

using namespace System;
using namespace System::Threading;

ref class kelas_thread
{
public:
	delegate void updateChat(String^ text);
	kelas_thread();
	void threadEntry();
	void timpa(String ^ textboxstring);
};

