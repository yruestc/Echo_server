#ifndef TIMERTHREAD_H

#define TIMERTHREAD_H 



#include "NonCopyable.h"

#include "Thread.h"

#include "Timer.h"

#include <functional>





class TimerThread : private NonCopyable

{

    public:

        typedef std::function<void()> TimerCallback;

        void setTimer(int value, int interval);

        void setTimerCallback(const TimerCallback &cb);

        void startTimerThread();

        void cancelTimerThread();



    private:

        Timer timer_;

        Thread thread_; 

};





#endif  /*TIMERTHREAD_H*/
Contact GitHub API Training Shop Blog About 

© 2017 GitHub, Inc. Terms Privacy Security Status
