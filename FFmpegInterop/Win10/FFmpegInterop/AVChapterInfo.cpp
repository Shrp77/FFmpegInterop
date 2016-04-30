#include "pch.h"
#include "AVChapterInfo.h"

using namespace FFmpegInterop;

AVChapterInfo::AVChapterInfo()
{
}

int AVChapterInfo::GetChapter()
{
	return _chapter;
}

void AVChapterInfo::SetChapter(int chapter)
{
	_chapter = chapter;
}

double AVChapterInfo::GetStartTime()
{
	return _startTime;
}

void AVChapterInfo::SetStartTime(double time)
{
	_startTime = time;
}

double AVChapterInfo::GetEndTime()
{
	return _endTime;
}

void AVChapterInfo::SetEndTime(double time)
{
	_endTime = time;
}

String^ AVChapterInfo::GetTitle()
{
	return _title;
}

void AVChapterInfo::SetTitle(String^ title)
{
	_title = title;
}