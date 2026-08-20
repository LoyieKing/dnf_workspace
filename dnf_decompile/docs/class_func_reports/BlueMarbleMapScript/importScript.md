# importScript

`_ZN19BlueMarbleMapScript12importScriptEPKc`

`BlueMarbleMapScript::importScript(char const*)`

| 类 | 地址 |
|---|---|
| `BlueMarbleMapScript` | `0x088d54e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d54e2  _ZN19BlueMarbleMapScript12importScriptEPKc
#           BlueMarbleMapScript::importScript(char const*)
# range [0x088d54e2, 0x088d5643]
088d54e2 +0x000:  push   %ebp
088d54e3 +0x001:  mov    %esp,%ebp
088d54e5 +0x003:  push   %esi
088d54e6 +0x004:  push   %ebx
088d54e7 +0x005:  sub    $0x20,%esp
088d54ea +0x008:  mov    0xc(%ebp),%eax
088d54ed +0x00b:  mov    %eax,0x4(%esp)
088d54f1 +0x00f:  movl   $"",(%esp)
088d54f8 +0x016:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088d54fd +0x01b:  xor    $0x1,%eax
088d5500 +0x01e:  test   %al,%al
088d5502 +0x020:  je     088d550e <+0x2c>
088d5504 +0x022:  mov    $0x0,%ebx
088d5509 +0x027:  jmp    088d563b <+0x159>
088d550e +0x02c:  lea    -0x10(%ebp),%eax
088d5511 +0x02f:  mov    %eax,(%esp)
088d5514 +0x032:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088d5519 +0x037:  movl   $0x0,-0x14(%ebp)
088d5520 +0x03e:  jmp    088d5523 <+0x41>
088d5522 +0x040:  nop
088d5523 +0x041:  movl   $0x1,0x4(%esp)
088d552b +0x049:  lea    -0x10(%ebp),%eax
088d552e +0x04c:  mov    %eax,(%esp)
088d5531 +0x04f:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088d5536 +0x054:  xor    $0x1,%eax
088d5539 +0x057:  test   %al,%al
088d553b +0x059:  jne    088d560d <+0x12b>
088d5541 +0x05f:  movl   $"[tile]",0x4(%esp)
088d5549 +0x067:  lea    -0x10(%ebp),%eax
088d554c +0x06a:  mov    %eax,(%esp)
088d554f +0x06d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5554 +0x072:  test   %al,%al
088d5556 +0x074:  je     088d5522 <+0x40>
088d5558 +0x076:  mov    0x8(%ebp),%eax
088d555b +0x079:  mov    %eax,(%esp)
088d555e +0x07c:  call   088d681e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0xa0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0xa0
088d5563 +0x081:  lea    -0x14(%ebp),%eax
088d5566 +0x084:  mov    %eax,(%esp)
088d5569 +0x087:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d556e +0x08c:  xor    $0x1,%eax
088d5571 +0x08f:  test   %al,%al
088d5573 +0x091:  je     088d557a <+0x98>
088d5575 +0x093:  jmp    088d5608 <+0x126>
088d557a +0x098:  mov    -0x14(%ebp),%ebx
088d557d +0x09b:  call   088d60f2 <_ZN23BlueMarbleScriptManager10getInsanceEv>  ; BlueMarbleScriptManager::getInsance()
088d5582 +0x0a0:  mov    %ebx,0x4(%esp)
088d5586 +0x0a4:  mov    %eax,(%esp)
088d5589 +0x0a7:  call   088d6646 <_ZN23BlueMarbleScriptManager7getTileEi>  ; BlueMarbleScriptManager::getTile(int)
088d558e +0x0ac:  mov    %eax,-0xc(%ebp)
088d5591 +0x0af:  cmpl   $0x0,-0xc(%ebp)
088d5595 +0x0b3:  jne    088d55a1 <+0xbf>
088d5597 +0x0b5:  mov    $0x0,%ebx
088d559c +0x0ba:  jmp    088d5630 <+0x14e>
088d55a1 +0x0bf:  lea    -0x14(%ebp),%eax
088d55a4 +0x0c2:  mov    %eax,(%esp)
088d55a7 +0x0c5:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d55ac +0x0ca:  xor    $0x1,%eax
088d55af +0x0cd:  test   %al,%al
088d55b1 +0x0cf:  je     088d55b5 <+0xd3>
088d55b3 +0x0d1:  jmp    088d5608 <+0x126>
088d55b5 +0x0d3:  movl   $0xc,(%esp)
088d55bc +0x0da:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088d55c1 +0x0df:  mov    %eax,%ebx
088d55c3 +0x0e1:  mov    %ebx,%eax
088d55c5 +0x0e3:  mov    %eax,(%esp)
088d55c8 +0x0e6:  call   088d5068 <_ZN20BlueMarbleTileScriptC1Ev>  ; BlueMarbleTileScript::BlueMarbleTileScript()
088d55cd +0x0eb:  mov    %ebx,%eax
088d55cf +0x0ed:  mov    %eax,-0x18(%ebp)
088d55d2 +0x0f0:  mov    -0x18(%ebp),%eax
088d55d5 +0x0f3:  mov    -0xc(%ebp),%edx
088d55d8 +0x0f6:  mov    (%edx),%ecx
088d55da +0x0f8:  mov    %ecx,(%eax)
088d55dc +0x0fa:  mov    0x4(%edx),%ecx
088d55df +0x0fd:  mov    %ecx,0x4(%eax)
088d55e2 +0x100:  mov    0x8(%edx),%edx
088d55e5 +0x103:  mov    %edx,0x8(%eax)
088d55e8 +0x106:  mov    -0x18(%ebp),%eax
088d55eb +0x109:  mov    -0x14(%ebp),%edx
088d55ee +0x10c:  mov    %edx,0x8(%eax)
088d55f1 +0x10f:  mov    0x8(%ebp),%eax
088d55f4 +0x112:  lea    -0x18(%ebp),%edx
088d55f7 +0x115:  mov    %edx,0x4(%esp)
088d55fb +0x119:  mov    %eax,(%esp)
088d55fe +0x11c:  call   088d683a <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0xbc>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0xbc
088d5603 +0x121:  jmp    088d5563 <+0x81>
088d5608 +0x126:  jmp    088d5523 <+0x41>
088d560d +0x12b:  nop
088d560e +0x12c:  mov    $0x1,%ebx
088d5613 +0x131:  jmp    088d5630 <+0x14e>
088d5615 +0x133:  mov    %edx,%ebx
088d5617 +0x135:  mov    %eax,%esi
088d5619 +0x137:  lea    -0x10(%ebp),%eax
088d561c +0x13a:  mov    %eax,(%esp)
088d561f +0x13d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d5624 +0x142:  mov    %esi,%eax
088d5626 +0x144:  mov    %ebx,%edx
088d5628 +0x146:  mov    %eax,(%esp)
088d562b +0x149:  call   08ae3750 <_Unwind_Resume>
088d5630 +0x14e:  lea    -0x10(%ebp),%eax
088d5633 +0x151:  mov    %eax,(%esp)
088d5636 +0x154:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d563b +0x159:  mov    %ebx,%eax
088d563d +0x15b:  add    $0x20,%esp
088d5640 +0x15e:  pop    %ebx
088d5641 +0x15f:  pop    %esi
088d5642 +0x160:  pop    %ebp
088d5643 +0x161:  ret
```

## 反编译 C

```c
// BlueMarbleMapScript::importScript @ 0x88d54e2

/* BlueMarbleMapScript::importScript(char const*) */

undefined4 __thiscall BlueMarbleMapScript::importScript(BlueMarbleMapScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  BlueMarbleTileScript *this_00;
  undefined4 uVar4;
  BlueMarbleTileScript *local_1c;
  int local_18;
  string local_14;
  undefined4 *local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
    local_18 = 0;
LAB_088d5523:
                    /* try { // try from 088d5531 to 088d5602 has its CatchHandler @ 088d5615 */
    cVar1 = ScanType((string *)&local_14,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[tile]");
      if (bVar2) {
        std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::clear
                  ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
        while (cVar1 = ScanInt(&local_18), cVar1 == '\x01') {
          iVar3 = BlueMarbleScriptManager::getInsance();
          local_10 = (undefined4 *)BlueMarbleScriptManager::getTile(iVar3);
          if (local_10 == (undefined4 *)0x0) {
            uVar4 = 0;
            goto LAB_088d5630;
          }
          cVar1 = ScanInt(&local_18);
          if (cVar1 != '\x01') break;
          this_00 = operator_new(0xc);
          BlueMarbleTileScript::BlueMarbleTileScript(this_00);
          *(undefined4 *)this_00 = *local_10;
          *(undefined4 *)(this_00 + 4) = local_10[1];
          *(undefined4 *)(this_00 + 8) = local_10[2];
          *(int *)(this_00 + 8) = local_18;
          local_1c = this_00;
          std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::push_back
                    ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this,
                     &local_1c);
        }
      }
      goto LAB_088d5523;
    }
    uVar4 = 1;
LAB_088d5630:
    std::string::~string((string *)&local_14);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
