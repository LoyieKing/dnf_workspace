# open

`_ZN5MySQL4openEPcS0_S0_S0_`

`MySQL::open(char*, char*, char*, char*)`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3e9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3e9e  _ZN5MySQL4openEPcS0_S0_S0_
#           MySQL::open(char*, char*, char*, char*)
# range [0x083f3e9e, 0x083f4023]
083f3e9e +0x000:  push   %ebp
083f3e9f +0x001:  mov    %esp,%ebp
083f3ea1 +0x003:  push   %ebx
083f3ea2 +0x004:  sub    $0x44,%esp
083f3ea5 +0x007:  mov    0x8(%ebp),%eax
083f3ea8 +0x00a:  lea    0x4206c(%eax),%edx
083f3eae +0x010:  mov    0x10(%ebp),%eax
083f3eb1 +0x013:  mov    %eax,0x4(%esp)
083f3eb5 +0x017:  mov    %edx,(%esp)
083f3eb8 +0x01a:  call   0807def0 <_init+0x7e8>
083f3ebd +0x01f:  mov    0x8(%ebp),%eax
083f3ec0 +0x022:  lea    0x42030(%eax),%edx
083f3ec6 +0x028:  mov    0xc(%ebp),%eax
083f3ec9 +0x02b:  mov    %eax,0x4(%esp)
083f3ecd +0x02f:  mov    %edx,(%esp)
083f3ed0 +0x032:  call   0807def0 <_init+0x7e8>
083f3ed5 +0x037:  mov    0x8(%ebp),%eax
083f3ed8 +0x03a:  lea    0x42044(%eax),%edx
083f3ede +0x040:  mov    0x14(%ebp),%eax
083f3ee1 +0x043:  mov    %eax,0x4(%esp)
083f3ee5 +0x047:  mov    %edx,(%esp)
083f3ee8 +0x04a:  call   0807def0 <_init+0x7e8>
083f3eed +0x04f:  mov    0x8(%ebp),%eax
083f3ef0 +0x052:  lea    0x42058(%eax),%edx
083f3ef6 +0x058:  mov    0x18(%ebp),%eax
083f3ef9 +0x05b:  mov    %eax,0x4(%esp)
083f3efd +0x05f:  mov    %edx,(%esp)
083f3f00 +0x062:  call   0807def0 <_init+0x7e8>
083f3f05 +0x067:  mov    0x8(%ebp),%eax
083f3f08 +0x06a:  mov    0x4(%eax),%eax
083f3f0b +0x06d:  movl   $0x400,0x1c(%esp)
083f3f13 +0x075:  movl   $0x0,0x18(%esp)
083f3f1b +0x07d:  movl   $0xcea,0x14(%esp)
083f3f23 +0x085:  mov    0x10(%ebp),%edx
083f3f26 +0x088:  mov    %edx,0x10(%esp)
083f3f2a +0x08c:  mov    0x18(%ebp),%edx
083f3f2d +0x08f:  mov    %edx,0xc(%esp)
083f3f31 +0x093:  mov    0x14(%ebp),%edx
083f3f34 +0x096:  mov    %edx,0x8(%esp)
083f3f38 +0x09a:  mov    0xc(%ebp),%edx
083f3f3b +0x09d:  mov    %edx,0x4(%esp)
083f3f3f +0x0a1:  mov    %eax,(%esp)
083f3f42 +0x0a4:  call   08736f10 <mysql_real_connect>
083f3f47 +0x0a9:  test   %eax,%eax
083f3f49 +0x0ab:  sete   %al
083f3f4c +0x0ae:  test   %al,%al
083f3f4e +0x0b0:  je     083f4018 <+0x17a>
083f3f54 +0x0b6:  mov    0x8(%ebp),%eax
083f3f57 +0x0b9:  mov    0x4(%eax),%eax
083f3f5a +0x0bc:  mov    %eax,(%esp)
083f3f5d +0x0bf:  call   08734530 <mysql_errno>
083f3f62 +0x0c4:  mov    %eax,%ebx
083f3f64 +0x0c6:  movl   $0x1,0x14(%esp)
083f3f6c +0x0ce:  movl   $0x1,0x10(%esp)
083f3f74 +0x0d6:  movl   $0x9,0xc(%esp)
083f3f7c +0x0de:  movl   $0x10a,0x8(%esp)
083f3f84 +0x0e6:  movl   $&_ZZN5MySQL4openEPcS0_S0_S0_E19__PRETTY_FUNCTION__,0x4(%esp)
083f3f8c +0x0ee:  lea    -0x28(%ebp),%eax
083f3f8f +0x0f1:  mov    %eax,(%esp)
083f3f92 +0x0f4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083f3f97 +0x0f9:  mov    %ebx,0x18(%esp)
083f3f9b +0x0fd:  mov    0x14(%ebp),%eax
083f3f9e +0x100:  mov    %eax,0x14(%esp)
083f3fa2 +0x104:  mov    0x10(%ebp),%eax
083f3fa5 +0x107:  mov    %eax,0x10(%esp)
083f3fa9 +0x10b:  movl   $0xcea,0xc(%esp)
083f3fb1 +0x113:  mov    0xc(%ebp),%eax
083f3fb4 +0x116:  mov    %eax,0x8(%esp)
083f3fb8 +0x11a:  movl   $"\n\t- mysql_real_connect(ip:%s, port:%d, name:%s, id:%s error='%d') fail",0x4(%esp)
083f3fc0 +0x122:  lea    -0x28(%ebp),%eax
083f3fc3 +0x125:  mov    %eax,(%esp)
083f3fc6 +0x128:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f3fcb +0x12d:  movl   $0x5,0xc(%esp)
083f3fd3 +0x135:  movl   $0x10e,0x8(%esp)
083f3fdb +0x13d:  movl   $&_ZZN5MySQL4openEPcS0_S0_S0_E19__PRETTY_FUNCTION__,0x4(%esp)
083f3fe3 +0x145:  lea    -0x18(%ebp),%eax
083f3fe6 +0x148:  mov    %eax,(%esp)
083f3fe9 +0x14b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f3fee +0x150:  movl   $0x10e,0xc(%esp)
083f3ff6 +0x158:  movl   $&_ZZN5MySQL4openEPcS0_S0_S0_E19__PRETTY_FUNCTION__,0x8(%esp)
083f3ffe +0x160:  movl   $"[%s][%d]",0x4(%esp)
083f4006 +0x168:  lea    -0x18(%ebp),%eax
083f4009 +0x16b:  mov    %eax,(%esp)
083f400c +0x16e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f4011 +0x173:  mov    $0x0,%eax
083f4016 +0x178:  jmp    083f401d <+0x17f>
083f4018 +0x17a:  mov    $0x1,%eax
083f401d +0x17f:  add    $0x44,%esp
083f4020 +0x182:  pop    %ebx
083f4021 +0x183:  pop    %ebp
083f4022 +0x184:  ret
083f4023 +0x185:  nop
```

## 反编译 C

```c
// MySQL::open @ 0x83f3e9e

/* MySQL::open(char*, char*, char*, char*) */

bool __thiscall MySQL::open(MySQL *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  cMyTrace local_2c [16];
  cMyTrace local_1c [20];
  
  strcpy((char *)(this + 0x4206c),param_2);
  strcpy((char *)(this + 0x42030),param_1);
  strcpy((char *)(this + 0x42044),param_3);
  strcpy((char *)(this + 0x42058),param_4);
  iVar1 = mysql_real_connect(*(undefined4 *)(this + 4),param_1,param_3,param_4,param_2,0xcea,0,0x400
                            );
  if (iVar1 == 0) {
    uVar2 = mysql_errno(*(undefined4 *)(this + 4));
    cMyTrace::cMyTrace(local_2c,"bool MySQL::open(char*, char*, char*, char*)",0x10a,9,true,true);
    cMyTrace::operator()
              (local_2c,"\n\t- mysql_real_connect(ip:%s, port:%d, name:%s, id:%s error=\'%d\') fail"
               ,param_1,0xcea,param_2,param_3,uVar2);
    cMyTrace::cMyTrace(local_1c,"bool MySQL::open(char*, char*, char*, char*)",0x10e,5);
    cMyTrace::operator()(local_1c,"[%s][%d]","bool MySQL::open(char*, char*, char*, char*)",0x10e);
  }
  return iVar1 != 0;
}
```
