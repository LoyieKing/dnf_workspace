# importScript

`_ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_`

`ARAD::SCRIPT::AradJumping_Script::importScript(char*, ARAD::SCRIPT::AradJumping_Script&)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AradJumping_Script` | `0x088b4128` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b4128  _ZN4ARAD6SCRIPT18AradJumping_Script12importScriptEPcRS1_
#           ARAD::SCRIPT::AradJumping_Script::importScript(char*, ARAD::SCRIPT::AradJumping_Script&)
# range [0x088b4128, 0x088b4249]
088b4128 +0x000:  push   %ebp
088b4129 +0x001:  mov    %esp,%ebp
088b412b +0x003:  push   %esi
088b412c +0x004:  push   %ebx
088b412d +0x005:  sub    $0x30,%esp
088b4130 +0x008:  lea    -0x10(%ebp),%eax
088b4133 +0x00b:  mov    %eax,(%esp)
088b4136 +0x00e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088b413b +0x013:  movb   $0x0,-0x11(%ebp)
088b413f +0x017:  mov    0x8(%ebp),%eax
088b4142 +0x01a:  mov    %eax,0x4(%esp)
088b4146 +0x01e:  movl   $"",(%esp)
088b414d +0x025:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088b4152 +0x02a:  xor    $0x1,%eax
088b4155 +0x02d:  test   %al,%al
088b4157 +0x02f:  je     088b4163 <+0x3b>
088b4159 +0x031:  mov    $0x1,%ebx
088b415e +0x036:  jmp    088b4236 <+0x10e>
088b4163 +0x03b:  mov    0xc(%ebp),%eax
088b4166 +0x03e:  mov    %eax,(%esp)
088b4169 +0x041:  call   088b43ee <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0xa3>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0xa3
088b416e +0x046:  mov    %eax,-0xc(%ebp)
088b4171 +0x049:  jmp    088b4174 <+0x4c>
088b4173 +0x04b:  nop
088b4174 +0x04c:  movl   $0x1,0x4(%esp)
088b417c +0x054:  lea    -0x10(%ebp),%eax
088b417f +0x057:  mov    %eax,(%esp)
088b4182 +0x05a:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088b4187 +0x05f:  xor    $0x1,%eax
088b418a +0x062:  test   %al,%al
088b418c +0x064:  jne    088b4213 <+0xeb>
088b4192 +0x06a:  movl   $"[Jumping Gift]",0x4(%esp)
088b419a +0x072:  lea    -0x10(%ebp),%eax
088b419d +0x075:  mov    %eax,(%esp)
088b41a0 +0x078:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b41a5 +0x07d:  test   %al,%al
088b41a7 +0x07f:  je     088b4173 <+0x4b>
088b41a9 +0x081:  lea    -0x11(%ebp),%eax
088b41ac +0x084:  mov    %eax,(%esp)
088b41af +0x087:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b41b4 +0x08c:  mov    %eax,-0x20(%ebp)
088b41b7 +0x08f:  movzbl -0x11(%ebp),%eax
088b41bb +0x093:  xor    $0x1,%eax
088b41be +0x096:  test   %al,%al
088b41c0 +0x098:  je     088b41c4 <+0x9c>
088b41c2 +0x09a:  jmp    088b420e <+0xe6>
088b41c4 +0x09c:  lea    -0x11(%ebp),%eax
088b41c7 +0x09f:  mov    %eax,(%esp)
088b41ca +0x0a2:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b41cf +0x0a7:  mov    %eax,-0x1c(%ebp)
088b41d2 +0x0aa:  movzbl -0x11(%ebp),%eax
088b41d6 +0x0ae:  xor    $0x1,%eax
088b41d9 +0x0b1:  test   %al,%al
088b41db +0x0b3:  je     088b41df <+0xb7>
088b41dd +0x0b5:  jmp    088b420e <+0xe6>
088b41df +0x0b7:  lea    -0x11(%ebp),%eax
088b41e2 +0x0ba:  mov    %eax,(%esp)
088b41e5 +0x0bd:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b41ea +0x0c2:  mov    %eax,-0x18(%ebp)
088b41ed +0x0c5:  movzbl -0x11(%ebp),%eax
088b41f1 +0x0c9:  xor    $0x1,%eax
088b41f4 +0x0cc:  test   %al,%al
088b41f6 +0x0ce:  je     088b41fa <+0xd2>
088b41f8 +0x0d0:  jmp    088b420e <+0xe6>
088b41fa +0x0d2:  mov    -0xc(%ebp),%eax
088b41fd +0x0d5:  lea    -0x20(%ebp),%edx
088b4200 +0x0d8:  mov    %edx,0x4(%esp)
088b4204 +0x0dc:  mov    %eax,(%esp)
088b4207 +0x0df:  call   088b45a2 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x257>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x257
088b420c +0x0e4:  jmp    088b41a9 <+0x81>
088b420e +0x0e6:  jmp    088b4174 <+0x4c>
088b4213 +0x0eb:  nop
088b4214 +0x0ec:  mov    $0x0,%ebx
088b4219 +0x0f1:  jmp    088b4236 <+0x10e>
088b421b +0x0f3:  mov    %edx,%ebx
088b421d +0x0f5:  mov    %eax,%esi
088b421f +0x0f7:  lea    -0x10(%ebp),%eax
088b4222 +0x0fa:  mov    %eax,(%esp)
088b4225 +0x0fd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b422a +0x102:  mov    %esi,%eax
088b422c +0x104:  mov    %ebx,%edx
088b422e +0x106:  mov    %eax,(%esp)
088b4231 +0x109:  call   08ae3750 <_Unwind_Resume>
088b4236 +0x10e:  lea    -0x10(%ebp),%eax
088b4239 +0x111:  mov    %eax,(%esp)
088b423c +0x114:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b4241 +0x119:  mov    %ebx,%eax
088b4243 +0x11b:  add    $0x30,%esp
088b4246 +0x11e:  pop    %ebx
088b4247 +0x11f:  pop    %esi
088b4248 +0x120:  pop    %ebp
088b4249 +0x121:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AradJumping_Script::importScript @ 0x88b4128

/* ARAD::SCRIPT::AradJumping_Script::importScript(char*, ARAD::SCRIPT::AradJumping_Script&) */

undefined4 ARAD::SCRIPT::AradJumping_Script::importScript(char *param_1,AradJumping_Script *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  bool local_15;
  string local_14;
  vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
  *local_10;
  
  std::string::string((string *)&local_14);
  local_15 = false;
                    /* try { // try from 088b414d to 088b420b has its CatchHandler @ 088b421b */
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    local_10 = (vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
                *)getRDARScriptData(param_2);
    while (cVar1 = ScanType((string *)&local_14,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[Jumping Gift]");
      if (bVar2) {
        while (((local_24 = ScanInt(&local_15), local_15 == true &&
                (local_20 = ScanInt(&local_15), local_15 == true)) &&
               (local_1c = ScanInt(&local_15), local_15 == true))) {
          std::
          vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
          ::push_back(local_10,(_AradJumpingRewardItem *)&local_24);
        }
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  std::string::~string((string *)&local_14);
  return uVar3;
}
```
