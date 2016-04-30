#pragma once

using namespace Platform;

namespace FFmpegInterop
{
	public ref class AVChapterInfo sealed
	{
	public:
		AVChapterInfo();

		int GetChapter();
		void SetChapter(int chapter);

		double GetStartTime();
		void SetStartTime(double time);

		double GetEndTime();
		void SetEndTime(double time);

		String^ GetTitle();
		void SetTitle(String^ title);
	private:
		int _chapter;
		double _startTime;
		double _endTime;
		String^ _title;
	};
}