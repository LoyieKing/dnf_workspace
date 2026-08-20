# importConfigParameter

`_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc`

`advancealtar::ConfigParameter::importConfigParameter(char const*)`

| 类 | 地址 |
|---|---|
| `advancealtar::ConfigParameter` | `0x0889b6cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889b6cc  _ZN12advancealtar15ConfigParameter21importConfigParameterEPKc
#           advancealtar::ConfigParameter::importConfigParameter(char const*)
# range [0x0889b6cc, 0x0889b8f6]
0889b6cc +0x000:  push   %ebp
0889b6cd +0x001:  mov    %esp,%ebp
0889b6cf +0x003:  push   %esi
0889b6d0 +0x004:  push   %ebx
0889b6d1 +0x005:  sub    $0x40,%esp
0889b6d4 +0x008:  lea    -0x28(%ebp),%eax
0889b6d7 +0x00b:  mov    %eax,(%esp)
0889b6da +0x00e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889b6df +0x013:  movl   $0x0,-0x24(%ebp)
0889b6e6 +0x01a:  movb   $0x0,-0x29(%ebp)
0889b6ea +0x01e:  mov    0xc(%ebp),%eax
0889b6ed +0x021:  mov    %eax,0x4(%esp)
0889b6f1 +0x025:  movl   $"",(%esp)
0889b6f8 +0x02c:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0889b6fd +0x031:  xor    $0x1,%eax
0889b700 +0x034:  test   %al,%al
0889b702 +0x036:  je     0889b712 <+0x46>
0889b704 +0x038:  mov    $0x0,%ebx
0889b709 +0x03d:  jmp    0889b8e3 <+0x217>
0889b70e +0x042:  nop
0889b70f +0x043:  jmp    0889b712 <+0x46>
0889b711 +0x045:  nop
0889b712 +0x046:  movl   $0x1,0x4(%esp)
0889b71a +0x04e:  lea    -0x28(%ebp),%eax
0889b71d +0x051:  mov    %eax,(%esp)
0889b720 +0x054:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0889b725 +0x059:  xor    $0x1,%eax
0889b728 +0x05c:  test   %al,%al
0889b72a +0x05e:  jne    0889b8c0 <+0x1f4>
0889b730 +0x064:  movl   $"[gage up rate]",0x4(%esp)
0889b738 +0x06c:  lea    -0x28(%ebp),%eax
0889b73b +0x06f:  mov    %eax,(%esp)
0889b73e +0x072:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b743 +0x077:  test   %al,%al
0889b745 +0x079:  je     0889b7e6 <+0x11a>
0889b74b +0x07f:  movl   $0x0,-0x20(%ebp)
0889b752 +0x086:  lea    -0x29(%ebp),%eax
0889b755 +0x089:  mov    %eax,(%esp)
0889b758 +0x08c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b75d +0x091:  mov    %eax,-0x1c(%ebp)
0889b760 +0x094:  movzbl -0x29(%ebp),%eax
0889b764 +0x098:  xor    $0x1,%eax
0889b767 +0x09b:  test   %al,%al
0889b769 +0x09d:  je     0889b76e <+0xa2>
0889b76b +0x09f:  nop
0889b76c +0x0a0:  jmp    0889b712 <+0x46>
0889b76e +0x0a2:  lea    -0x29(%ebp),%eax
0889b771 +0x0a5:  mov    %eax,(%esp)
0889b774 +0x0a8:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b779 +0x0ad:  mov    %eax,-0x18(%ebp)
0889b77c +0x0b0:  movzbl -0x29(%ebp),%eax
0889b780 +0x0b4:  xor    $0x1,%eax
0889b783 +0x0b7:  test   %al,%al
0889b785 +0x0b9:  je     0889b791 <+0xc5>
0889b787 +0x0bb:  mov    $0x3e9,%ebx
0889b78c +0x0c0:  jmp    0889b8e3 <+0x217>
0889b791 +0x0c5:  lea    -0x29(%ebp),%eax
0889b794 +0x0c8:  mov    %eax,(%esp)
0889b797 +0x0cb:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b79c +0x0d0:  mov    %eax,-0x14(%ebp)
0889b79f +0x0d3:  movzbl -0x29(%ebp),%eax
0889b7a3 +0x0d7:  xor    $0x1,%eax
0889b7a6 +0x0da:  test   %al,%al
0889b7a8 +0x0dc:  je     0889b7b4 <+0xe8>
0889b7aa +0x0de:  mov    $0x3ec,%ebx
0889b7af +0x0e3:  jmp    0889b8e3 <+0x217>
0889b7b4 +0x0e8:  cmpl   $0x0,-0x1c(%ebp)
0889b7b8 +0x0ec:  js     0889b7dd <+0x111>
0889b7ba +0x0ee:  cmpl   $0x3,-0x1c(%ebp)
0889b7be +0x0f2:  jg     0889b7dd <+0x111>
0889b7c0 +0x0f4:  mov    -0x1c(%ebp),%edx
0889b7c3 +0x0f7:  mov    0x8(%ebp),%eax
0889b7c6 +0x0fa:  mov    -0x14(%ebp),%ecx
0889b7c9 +0x0fd:  mov    %ecx,0x8(%eax,%edx,4)
0889b7cd +0x101:  mov    -0x1c(%ebp),%edx
0889b7d0 +0x104:  mov    0x8(%ebp),%eax
0889b7d3 +0x107:  lea    0x4(%edx),%ecx
0889b7d6 +0x10a:  mov    -0x18(%ebp),%edx
0889b7d9 +0x10d:  mov    %edx,0xc(%eax,%ecx,4)
0889b7dd +0x111:  addl   $0x1,-0x20(%ebp)
0889b7e1 +0x115:  jmp    0889b752 <+0x86>
0889b7e6 +0x11a:  movl   $"[gage upgrade cost percent]",0x4(%esp)
0889b7ee +0x122:  lea    -0x28(%ebp),%eax
0889b7f1 +0x125:  mov    %eax,(%esp)
0889b7f4 +0x128:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b7f9 +0x12d:  test   %al,%al
0889b7fb +0x12f:  je     0889b82e <+0x162>
0889b7fd +0x131:  lea    -0x29(%ebp),%eax
0889b800 +0x134:  mov    %eax,(%esp)
0889b803 +0x137:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
0889b808 +0x13c:  fstps  -0x10(%ebp)
0889b80b +0x13f:  movzbl -0x29(%ebp),%eax
0889b80f +0x143:  xor    $0x1,%eax
0889b812 +0x146:  test   %al,%al
0889b814 +0x148:  je     0889b820 <+0x154>
0889b816 +0x14a:  mov    $0x3f8,%ebx
0889b81b +0x14f:  jmp    0889b8e3 <+0x217>
0889b820 +0x154:  mov    0x8(%ebp),%eax
0889b823 +0x157:  mov    -0x10(%ebp),%edx
0889b826 +0x15a:  mov    %edx,0x4(%eax)
0889b829 +0x15d:  jmp    0889b712 <+0x46>
0889b82e +0x162:  movl   $"[daily refill ticket]",0x4(%esp)
0889b836 +0x16a:  lea    -0x28(%ebp),%eax
0889b839 +0x16d:  mov    %eax,(%esp)
0889b83c +0x170:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b841 +0x175:  test   %al,%al
0889b843 +0x177:  je     0889b872 <+0x1a6>
0889b845 +0x179:  lea    -0x29(%ebp),%eax
0889b848 +0x17c:  mov    %eax,(%esp)
0889b84b +0x17f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b850 +0x184:  mov    %eax,-0xc(%ebp)
0889b853 +0x187:  movzbl -0x29(%ebp),%eax
0889b857 +0x18b:  xor    $0x1,%eax
0889b85a +0x18e:  test   %al,%al
0889b85c +0x190:  je     0889b865 <+0x199>
0889b85e +0x192:  mov    $0x3ff,%ebx
0889b863 +0x197:  jmp    0889b8e3 <+0x217>
0889b865 +0x199:  mov    0x8(%ebp),%eax
0889b868 +0x19c:  mov    -0xc(%ebp),%edx
0889b86b +0x19f:  mov    %edx,(%eax)
0889b86d +0x1a1:  jmp    0889b712 <+0x46>
0889b872 +0x1a6:  movl   $"[/gage up rate]",0x4(%esp)
0889b87a +0x1ae:  lea    -0x28(%ebp),%eax
0889b87d +0x1b1:  mov    %eax,(%esp)
0889b880 +0x1b4:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b885 +0x1b9:  test   %al,%al
0889b887 +0x1bb:  jne    0889b70e <+0x42>
0889b88d +0x1c1:  movl   $"[/gage upgrade cost percent]",0x4(%esp)
0889b895 +0x1c9:  lea    -0x28(%ebp),%eax
0889b898 +0x1cc:  mov    %eax,(%esp)
0889b89b +0x1cf:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b8a0 +0x1d4:  test   %al,%al
0889b8a2 +0x1d6:  jne    0889b711 <+0x45>
0889b8a8 +0x1dc:  movl   $"[/daily refill ticket]",0x4(%esp)
0889b8b0 +0x1e4:  lea    -0x28(%ebp),%eax
0889b8b3 +0x1e7:  mov    %eax,(%esp)
0889b8b6 +0x1ea:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b8bb +0x1ef:  jmp    0889b712 <+0x46>
0889b8c0 +0x1f4:  nop
0889b8c1 +0x1f5:  mov    $0x0,%ebx
0889b8c6 +0x1fa:  jmp    0889b8e3 <+0x217>
0889b8c8 +0x1fc:  mov    %edx,%ebx
0889b8ca +0x1fe:  mov    %eax,%esi
0889b8cc +0x200:  lea    -0x28(%ebp),%eax
0889b8cf +0x203:  mov    %eax,(%esp)
0889b8d2 +0x206:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889b8d7 +0x20b:  mov    %esi,%eax
0889b8d9 +0x20d:  mov    %ebx,%edx
0889b8db +0x20f:  mov    %eax,(%esp)
0889b8de +0x212:  call   08ae3750 <_Unwind_Resume>
0889b8e3 +0x217:  lea    -0x28(%ebp),%eax
0889b8e6 +0x21a:  mov    %eax,(%esp)
0889b8e9 +0x21d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889b8ee +0x222:  mov    %ebx,%eax
0889b8f0 +0x224:  add    $0x40,%esp
0889b8f3 +0x227:  pop    %ebx
0889b8f4 +0x228:  pop    %esi
0889b8f5 +0x229:  pop    %ebp
0889b8f6 +0x22a:  ret
```

## 反编译 C

```c
// advancealtar::ConfigParameter::importConfigParameter @ 0x889b6cc

/* advancealtar::ConfigParameter::importConfigParameter(char const*) */

undefined4 __thiscall
advancealtar::ConfigParameter::importConfigParameter(ConfigParameter *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  longdouble lVar4;
  bool local_2d;
  string local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  
  std::string::string((string *)&local_2c);
  local_28 = 0;
  local_2d = false;
                    /* try { // try from 0889b6f8 to 0889b8ba has its CatchHandler @ 0889b8c8 */
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    while (cVar1 = ScanType((string *)&local_2c,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_2c,"[gage up rate]");
      if (bVar2) {
        local_24 = 0;
        while (local_20 = ScanInt(&local_2d), local_2d == true) {
          local_1c = ScanInt(&local_2d);
          if (local_2d != true) {
            uVar3 = 0x3e9;
            goto LAB_0889b8e3;
          }
          local_18 = ScanInt(&local_2d);
          if (local_2d != true) {
            uVar3 = 0x3ec;
            goto LAB_0889b8e3;
          }
          if ((-1 < local_20) && (local_20 < 4)) {
            *(undefined4 *)(this + local_20 * 4 + 8) = local_18;
            *(undefined4 *)(this + (local_20 + 4) * 4 + 0xc) = local_1c;
          }
          local_24 = local_24 + 1;
        }
      }
      else {
        bVar2 = std::operator==(&local_2c,"[gage upgrade cost percent]");
        if (bVar2) {
          lVar4 = (longdouble)ScanFloat(&local_2d);
          local_14 = (float)lVar4;
          if (local_2d != true) {
            uVar3 = 0x3f8;
            goto LAB_0889b8e3;
          }
          *(float *)(this + 4) = local_14;
        }
        else {
          bVar2 = std::operator==(&local_2c,"[daily refill ticket]");
          if (bVar2) {
            local_10 = ScanInt(&local_2d);
            if (local_2d != true) {
              uVar3 = 0x3ff;
              goto LAB_0889b8e3;
            }
            *(undefined4 *)this = local_10;
          }
          else {
            bVar2 = std::operator==(&local_2c,"[/gage up rate]");
            if ((!bVar2) &&
               (bVar2 = std::operator==(&local_2c,"[/gage upgrade cost percent]"), !bVar2)) {
              std::operator==(&local_2c,"[/daily refill ticket]");
            }
          }
        }
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
LAB_0889b8e3:
  std::string::~string((string *)&local_2c);
  return uVar3;
}
```
