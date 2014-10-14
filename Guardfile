
ignore /tester\.cpp/

guard :shell do
  watch /SRM.*\.cpp/ do |m|
    `g++ --std=c++11 -W -Wall -Wno-sign-compare -O2 '#{m[0]}' && ./a.out`
  end
end
