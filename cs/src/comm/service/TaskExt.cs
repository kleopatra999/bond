// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

namespace Bond.Comm.Service
{
    using System;
    using System.Threading.Tasks;

    public static class TaskExt
    {
        public static Task<TResult> FromException<TResult>(Exception ex)
        {
            var tcs = new TaskCompletionSource<TResult>();
            tcs.SetException(ex);
            return tcs.Task;
        }

        private static Task completedTask = Task.FromResult(default(object));

        public static Task CompletedTask
        {
            get
            {
                return completedTask;
            }
        }
    }
}
