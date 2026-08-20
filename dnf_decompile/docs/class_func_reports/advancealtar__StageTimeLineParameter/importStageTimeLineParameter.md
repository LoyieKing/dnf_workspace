# importStageTimeLineParameter

`_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc`

`advancealtar::StageTimeLineParameter::importStageTimeLineParameter(char const*)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x08899f26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899f26  _ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc
#           advancealtar::StageTimeLineParameter::importStageTimeLineParameter(char const*)
# range [0x08899f26, 0x0889a02b]
08899f26 +0x000:  push   %ebp
08899f27 +0x001:  mov    %esp,%ebp
08899f29 +0x003:  push   %esi
08899f2a +0x004:  push   %ebx
08899f2b +0x005:  sub    $0x30,%esp
08899f2e +0x008:  lea    -0x1c(%ebp),%eax
08899f31 +0x00b:  mov    %eax,(%esp)
08899f34 +0x00e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08899f39 +0x013:  movl   $0x0,-0x18(%ebp)
08899f40 +0x01a:  movb   $0x0,-0x11(%ebp)
08899f44 +0x01e:  mov    0x8(%ebp),%eax
08899f47 +0x021:  mov    %eax,(%esp)
08899f4a +0x024:  call   08899ef6 <_ZN12advancealtar22StageTimeLineParameter5resetEv>  ; advancealtar::StageTimeLineParameter::reset()
08899f4f +0x029:  mov    0xc(%ebp),%eax
08899f52 +0x02c:  mov    %eax,0x4(%esp)
08899f56 +0x030:  movl   $"",(%esp)
08899f5d +0x037:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08899f62 +0x03c:  xor    $0x1,%eax
08899f65 +0x03f:  test   %al,%al
08899f67 +0x041:  je     08899f7a <+0x54>
08899f69 +0x043:  mov    $0x0,%ebx
08899f6e +0x048:  jmp    0889a017 <+0xf1>
08899f73 +0x04d:  nop
08899f74 +0x04e:  jmp    08899f7a <+0x54>
08899f76 +0x050:  nop
08899f77 +0x051:  jmp    08899f7a <+0x54>
08899f79 +0x053:  nop
08899f7a +0x054:  movl   $0x1,0x4(%esp)
08899f82 +0x05c:  lea    -0x1c(%ebp),%eax
08899f85 +0x05f:  mov    %eax,(%esp)
08899f88 +0x062:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08899f8d +0x067:  xor    $0x1,%eax
08899f90 +0x06a:  test   %al,%al
08899f92 +0x06c:  jne    08899ff4 <+0xce>
08899f94 +0x06e:  movl   $"[summon object]",0x4(%esp)
08899f9c +0x076:  lea    -0x1c(%ebp),%eax
08899f9f +0x079:  mov    %eax,(%esp)
08899fa2 +0x07c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08899fa7 +0x081:  test   %al,%al
08899fa9 +0x083:  je     08899fc4 <+0x9e>
08899fab +0x085:  mov    0x8(%ebp),%eax
08899fae +0x088:  mov    %eax,(%esp)
08899fb1 +0x08b:  call   0889a21e <_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv>  ; advancealtar::StageTimeLineParameter::importSummonObject()
08899fb6 +0x090:  mov    %eax,-0x10(%ebp)
08899fb9 +0x093:  cmpl   $0x0,-0x10(%ebp)
08899fbd +0x097:  je     08899f73 <+0x4d>
08899fbf +0x099:  mov    -0x10(%ebp),%ebx
08899fc2 +0x09c:  jmp    0889a017 <+0xf1>
08899fc4 +0x09e:  movl   $"[action define]",0x4(%esp)
08899fcc +0x0a6:  lea    -0x1c(%ebp),%eax
08899fcf +0x0a9:  mov    %eax,(%esp)
08899fd2 +0x0ac:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08899fd7 +0x0b1:  test   %al,%al
08899fd9 +0x0b3:  je     08899f76 <+0x50>
08899fdb +0x0b5:  mov    0x8(%ebp),%eax
08899fde +0x0b8:  mov    %eax,(%esp)
08899fe1 +0x0bb:  call   0889a56e <_ZN12advancealtar22StageTimeLineParameter18importActionDefineEv>  ; advancealtar::StageTimeLineParameter::importActionDefine()
08899fe6 +0x0c0:  mov    %eax,-0xc(%ebp)
08899fe9 +0x0c3:  cmpl   $0x0,-0xc(%ebp)
08899fed +0x0c7:  je     08899f79 <+0x53>
08899fef +0x0c9:  mov    -0xc(%ebp),%ebx
08899ff2 +0x0cc:  jmp    0889a017 <+0xf1>
08899ff4 +0x0ce:  nop
08899ff5 +0x0cf:  mov    $0x0,%ebx
08899ffa +0x0d4:  jmp    0889a017 <+0xf1>
08899ffc +0x0d6:  mov    %edx,%ebx
08899ffe +0x0d8:  mov    %eax,%esi
0889a000 +0x0da:  lea    -0x1c(%ebp),%eax
0889a003 +0x0dd:  mov    %eax,(%esp)
0889a006 +0x0e0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889a00b +0x0e5:  mov    %esi,%eax
0889a00d +0x0e7:  mov    %ebx,%edx
0889a00f +0x0e9:  mov    %eax,(%esp)
0889a012 +0x0ec:  call   08ae3750 <_Unwind_Resume>
0889a017 +0x0f1:  lea    -0x1c(%ebp),%eax
0889a01a +0x0f4:  mov    %eax,(%esp)
0889a01d +0x0f7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889a022 +0x0fc:  mov    %ebx,%eax
0889a024 +0x0fe:  add    $0x30,%esp
0889a027 +0x101:  pop    %ebx
0889a028 +0x102:  pop    %esi
0889a029 +0x103:  pop    %ebp
0889a02a +0x104:  ret
0889a02b +0x105:  nop
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::importStageTimeLineParameter @ 0x8899f26

/* advancealtar::StageTimeLineParameter::importStageTimeLineParameter(char const*) */

int __thiscall
advancealtar::StageTimeLineParameter::importStageTimeLineParameter
          (StageTimeLineParameter *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  string local_20;
  undefined4 local_1c;
  undefined1 local_15;
  int local_14;
  int local_10;
  
  std::string::string((string *)&local_20);
  local_1c = 0;
  local_15 = 0;
                    /* try { // try from 08899f4a to 08899fe5 has its CatchHandler @ 08899ffc */
  reset(this);
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    do {
      while( true ) {
        cVar1 = ScanType((string *)&local_20,true);
        if (cVar1 != '\x01') {
          iVar3 = 0;
          goto LAB_0889a017;
        }
        bVar2 = std::operator==(&local_20,"[summon object]");
        if (!bVar2) break;
        iVar3 = importSummonObject();
        local_14 = iVar3;
        if (iVar3 != 0) goto LAB_0889a017;
      }
      bVar2 = std::operator==(&local_20,"[action define]");
    } while ((!bVar2) || (iVar3 = importActionDefine(), local_10 = iVar3, iVar3 == 0));
  }
  else {
    iVar3 = 0;
  }
LAB_0889a017:
  std::string::~string((string *)&local_20);
  return iVar3;
}
```
