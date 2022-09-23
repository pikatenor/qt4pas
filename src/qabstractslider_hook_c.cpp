//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qabstractslider_hook.h"

C_EXPORT QAbstractSlider_hookH QAbstractSlider_hook_create(QObjectH handle)
{
	return (QAbstractSlider_hookH) new QAbstractSlider_hook((QObject*)handle);
}

C_EXPORT void QAbstractSlider_hook_destroy(QAbstractSlider_hookH handle)
{
	delete (QAbstractSlider_hook *)handle;
}

C_EXPORT void QAbstractSlider_hook_hook_valueChanged(QAbstractSlider_hookH handle, QHookH hook)
{
	((QAbstractSlider_hook *)handle)->hook_valueChanged(hook);
}

C_EXPORT void QAbstractSlider_hook_hook_sliderPressed(QAbstractSlider_hookH handle, QHookH hook)
{
	((QAbstractSlider_hook *)handle)->hook_sliderPressed(hook);
}

C_EXPORT void QAbstractSlider_hook_hook_sliderMoved(QAbstractSlider_hookH handle, QHookH hook)
{
	((QAbstractSlider_hook *)handle)->hook_sliderMoved(hook);
}

C_EXPORT void QAbstractSlider_hook_hook_sliderReleased(QAbstractSlider_hookH handle, QHookH hook)
{
	((QAbstractSlider_hook *)handle)->hook_sliderReleased(hook);
}

C_EXPORT void QAbstractSlider_hook_hook_rangeChanged(QAbstractSlider_hookH handle, QHookH hook)
{
	((QAbstractSlider_hook *)handle)->hook_rangeChanged(hook);
}

C_EXPORT void QAbstractSlider_hook_hook_actionTriggered(QAbstractSlider_hookH handle, QHookH hook)
{
	((QAbstractSlider_hook *)handle)->hook_actionTriggered(hook);
}

