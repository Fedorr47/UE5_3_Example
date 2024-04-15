// Fill out your copyright notice in the Description page of Project Settings.


#include "MessageQueue.h"

bool UMessageQueue::IsTickable() const
{
	return true;
}

TStatId UMessageQueue::GetStatId() const
{
	return TStatId();
}

void UMessageQueue::Push(UBaseMessage* InMsg)
{
	mMessages.Enqueue(InMsg);
}

void UMessageQueue::Tick(float DeltaTime)
{
	if (UBaseMessage** Msg = mMessages.Peek())
	{
		if (*Msg)
		{
			OnMessageProcess.Broadcast(*Msg);
			mMessages.Pop();
		}
	}
}
