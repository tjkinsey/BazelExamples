# BazelExamples
Unit testing with bazel using Java and C++

I created two example directories to show (on a very basic level) how bazel works with unit testing for java and c++.

In order to run bazel you will need to download and install bazel.

Documentation for bazel is [here](https://docs.bazel.build/versions/master/bazel-overview.html) 

UNIT TESTING NOTES:
    I am using a symbolic link for my google unit test and a hard link for my junit test dependencies. If you want to replicate this repo you will need to download [google unit test](https://github.com/google/googletest) and [junit test](https://junit.org/junit4/).

    Once downloaded you can copy them to whatever directory you choose (ex. /usr/bin). Then in your bazel project you can just make a link to the unit test dependencies. 
    (ex. ln /usr/bin/JUNIT/junit...jar junitLink.jar) 
    and for google test
    (ex. ln -s /usr/bin/GTEST/googleTestDir gTest)

    note that the junit dependency needs to be a .jar for bazel to recognize it.

    I also made a .bazelrc file in my home directory with helpful feedback for testing

    $ cd ~
    $ vim .bazelrc
     add the following lines
        test --test_verbose_timeout_warnings

        test --test_output=all
    save and close

    in order for these changes to take affect go to your bazel directory and enter

    $ bazel clean; bazel shutdown
    
    Then the next time you run "bazel test ..." you will see the new output.