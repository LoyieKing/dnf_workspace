# loadScript

`_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc`

`WongWork::CGeneratorCommonData::loadScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CGeneratorCommonData` | `0x08534456` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534456  _ZN8WongWork20CGeneratorCommonData10loadScriptEPKc
#           WongWork::CGeneratorCommonData::loadScript(char const*)
# range [0x08534456, 0x085345b5]
08534456 +0x000:  push   %ebp
08534457 +0x001:  mov    %esp,%ebp
08534459 +0x003:  push   %esi
0853445a +0x004:  push   %ebx
0853445b +0x005:  sub    $0x20,%esp
0853445e +0x008:  mov    0xc(%ebp),%eax
08534461 +0x00b:  mov    %eax,0x4(%esp)
08534465 +0x00f:  movl   $"",(%esp)
0853446c +0x016:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08534471 +0x01b:  xor    $0x1,%eax
08534474 +0x01e:  test   %al,%al
08534476 +0x020:  je     08534482 <+0x2c>
08534478 +0x022:  mov    $0x1d8,%ebx
0853447d +0x027:  jmp    085345ad <+0x157>
08534482 +0x02c:  lea    -0x14(%ebp),%eax
08534485 +0x02f:  mov    %eax,(%esp)
08534488 +0x032:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0853448d +0x037:  movl   $0x0,-0x10(%ebp)
08534494 +0x03e:  movb   $0x0,-0x15(%ebp)
08534498 +0x042:  movl   $0x1,0x4(%esp)
085344a0 +0x04a:  lea    -0x14(%ebp),%eax
085344a3 +0x04d:  mov    %eax,(%esp)
085344a6 +0x050:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
085344ab +0x055:  xor    $0x1,%eax
085344ae +0x058:  test   %al,%al
085344b0 +0x05a:  jne    0853457f <+0x129>
085344b6 +0x060:  movl   $"[gold drop ref table]",0x4(%esp)
085344be +0x068:  lea    -0x14(%ebp),%eax
085344c1 +0x06b:  mov    %eax,(%esp)
085344c4 +0x06e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085344c9 +0x073:  test   %al,%al
085344cb +0x075:  je     08534578 <+0x122>
085344d1 +0x07b:  mov    0x8(%ebp),%eax
085344d4 +0x07e:  movl   $0x0,(%eax)
085344da +0x084:  mov    0x8(%ebp),%eax
085344dd +0x087:  movl   $0x0,0x4(%eax)
085344e4 +0x08e:  movl   $0x1,-0xc(%ebp)
085344eb +0x095:  jmp    08534561 <+0x10b>
085344ed +0x097:  lea    -0x15(%ebp),%eax
085344f0 +0x09a:  mov    %eax,(%esp)
085344f3 +0x09d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
085344f8 +0x0a2:  mov    %eax,-0x10(%ebp)
085344fb +0x0a5:  movzbl -0x15(%ebp),%eax
085344ff +0x0a9:  xor    $0x1,%eax
08534502 +0x0ac:  test   %al,%al
08534504 +0x0ae:  je     08534510 <+0xba>
08534506 +0x0b0:  mov    $0x1ec,%ebx
0853450b +0x0b5:  jmp    085345a2 <+0x14c>
08534510 +0x0ba:  mov    -0x10(%ebp),%ebx
08534513 +0x0bd:  lea    -0x15(%ebp),%eax
08534516 +0x0c0:  mov    %eax,(%esp)
08534519 +0x0c3:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853451e +0x0c8:  mov    0x8(%ebp),%edx
08534521 +0x0cb:  mov    %eax,(%edx,%ebx,8)
08534524 +0x0ce:  movzbl -0x15(%ebp),%eax
08534528 +0x0d2:  xor    $0x1,%eax
0853452b +0x0d5:  test   %al,%al
0853452d +0x0d7:  je     08534536 <+0xe0>
0853452f +0x0d9:  mov    $0x1f0,%ebx
08534534 +0x0de:  jmp    085345a2 <+0x14c>
08534536 +0x0e0:  mov    -0x10(%ebp),%ebx
08534539 +0x0e3:  lea    -0x15(%ebp),%eax
0853453c +0x0e6:  mov    %eax,(%esp)
0853453f +0x0e9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08534544 +0x0ee:  mov    0x8(%ebp),%edx
08534547 +0x0f1:  mov    %eax,0x4(%edx,%ebx,8)
0853454b +0x0f5:  movzbl -0x15(%ebp),%eax
0853454f +0x0f9:  xor    $0x1,%eax
08534552 +0x0fc:  test   %al,%al
08534554 +0x0fe:  je     0853455d <+0x107>
08534556 +0x100:  mov    $0x1f4,%ebx
0853455b +0x105:  jmp    085345a2 <+0x14c>
0853455d +0x107:  addl   $0x1,-0xc(%ebp)
08534561 +0x10b:  cmpl   $0xc8,-0xc(%ebp)
08534568 +0x112:  setle  %al
0853456b +0x115:  test   %al,%al
0853456d +0x117:  jne    085344ed <+0x97>
08534573 +0x11d:  jmp    08534498 <+0x42>
08534578 +0x122:  mov    $0x1f8,%ebx
0853457d +0x127:  jmp    085345a2 <+0x14c>
0853457f +0x129:  nop
08534580 +0x12a:  mov    $0x0,%ebx
08534585 +0x12f:  jmp    085345a2 <+0x14c>
08534587 +0x131:  mov    %edx,%ebx
08534589 +0x133:  mov    %eax,%esi
0853458b +0x135:  lea    -0x14(%ebp),%eax
0853458e +0x138:  mov    %eax,(%esp)
08534591 +0x13b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08534596 +0x140:  mov    %esi,%eax
08534598 +0x142:  mov    %ebx,%edx
0853459a +0x144:  mov    %eax,(%esp)
0853459d +0x147:  call   08ae3750 <_Unwind_Resume>
085345a2 +0x14c:  lea    -0x14(%ebp),%eax
085345a5 +0x14f:  mov    %eax,(%esp)
085345a8 +0x152:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085345ad +0x157:  mov    %ebx,%eax
085345af +0x159:  add    $0x20,%esp
085345b2 +0x15c:  pop    %ebx
085345b3 +0x15d:  pop    %esi
085345b4 +0x15e:  pop    %ebp
085345b5 +0x15f:  ret
```

## 反编译 C

```c
// WongWork::CGeneratorCommonData::loadScript @ 0x8534456

/* WongWork::CGeneratorCommonData::loadScript(char const*) */

undefined4 __thiscall
WongWork::CGeneratorCommonData::loadScript(CGeneratorCommonData *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  bool local_19;
  string local_18;
  int local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_18);
    local_14 = 0;
    local_19 = false;
                    /* try { // try from 085344a6 to 08534543 has its CatchHandler @ 08534587 */
    while (cVar2 = ScanType((string *)&local_18,true), cVar2 == '\x01') {
      bVar3 = std::operator==(&local_18,"[gold drop ref table]");
      if (!bVar3) {
        uVar5 = 0x1f8;
        goto LAB_085345a2;
      }
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 4) = 0;
      for (local_10 = 1; local_10 < 0xc9; local_10 = local_10 + 1) {
        iVar4 = ScanInt(&local_19);
        local_14 = iVar4;
        if (local_19 != true) {
          uVar5 = 0x1ec;
          goto LAB_085345a2;
        }
        uVar5 = ScanInt(&local_19);
        iVar1 = local_14;
        *(undefined4 *)(this + iVar4 * 8) = uVar5;
        if (local_19 != true) {
          uVar5 = 0x1f0;
          goto LAB_085345a2;
        }
        uVar5 = ScanInt(&local_19);
        *(undefined4 *)(this + iVar1 * 8 + 4) = uVar5;
        if (local_19 != true) {
          uVar5 = 500;
          goto LAB_085345a2;
        }
      }
    }
    uVar5 = 0;
LAB_085345a2:
    std::string::~string((string *)&local_18);
  }
  else {
    uVar5 = 0x1d8;
  }
  return uVar5;
}
```
