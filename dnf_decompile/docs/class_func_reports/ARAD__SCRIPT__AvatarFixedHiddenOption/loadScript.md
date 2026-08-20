# loadScript

`_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv`

`ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarFixedHiddenOption` | `0x088aedce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088aedce  _ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv
#           ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript()
# range [0x088aedce, 0x088aef51]
088aedce +0x000:  push   %ebp
088aedcf +0x001:  mov    %esp,%ebp
088aedd1 +0x003:  push   %esi
088aedd2 +0x004:  push   %ebx
088aedd3 +0x005:  sub    $0x20,%esp
088aedd6 +0x008:  movl   $"AvatarFixedHiddenOptionList.etc",0x4(%esp)
088aedde +0x010:  movl   $"Etc/Avatar_Roulette/",(%esp)
088aede5 +0x017:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088aedea +0x01c:  xor    $0x1,%eax
088aeded +0x01f:  test   %al,%al
088aedef +0x021:  je     088aedfb <+0x2d>
088aedf1 +0x023:  mov    $0xffffffff,%ebx
088aedf6 +0x028:  jmp    088aef49 <+0x17b>
088aedfb +0x02d:  lea    -0x10(%ebp),%eax
088aedfe +0x030:  mov    %eax,(%esp)
088aee01 +0x033:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088aee06 +0x038:  movb   $0x0,-0x9(%ebp)
088aee0a +0x03c:  jmp    088aee0d <+0x3f>
088aee0c +0x03e:  nop
088aee0d +0x03f:  movl   $0x1,0x4(%esp)
088aee15 +0x047:  lea    -0x10(%ebp),%eax
088aee18 +0x04a:  mov    %eax,(%esp)
088aee1b +0x04d:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088aee20 +0x052:  xor    $0x1,%eax
088aee23 +0x055:  test   %al,%al
088aee25 +0x057:  jne    088aef1b <+0x14d>
088aee2b +0x05d:  movl   $"[upper]",0x4(%esp)
088aee33 +0x065:  lea    -0x10(%ebp),%eax
088aee36 +0x068:  mov    %eax,(%esp)
088aee39 +0x06b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088aee3e +0x070:  test   %al,%al
088aee40 +0x072:  je     088aee87 <+0xb9>
088aee42 +0x074:  jmp    088aee45 <+0x77>
088aee44 +0x076:  nop
088aee45 +0x077:  movl   $0x1,0x4(%esp)
088aee4d +0x07f:  lea    -0x10(%ebp),%eax
088aee50 +0x082:  mov    %eax,(%esp)
088aee53 +0x085:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088aee58 +0x08a:  xor    $0x1,%eax
088aee5b +0x08d:  test   %al,%al
088aee5d +0x08f:  je     088aee62 <+0x94>
088aee5f +0x091:  nop
088aee60 +0x092:  jmp    088aee0d <+0x3f>
088aee62 +0x094:  mov    0x8(%ebp),%eax
088aee65 +0x097:  lea    0x18(%eax),%edx
088aee68 +0x09a:  lea    -0x10(%ebp),%eax
088aee6b +0x09d:  mov    %eax,0x8(%esp)
088aee6f +0x0a1:  mov    %edx,0x4(%esp)
088aee73 +0x0a5:  mov    0x8(%ebp),%eax
088aee76 +0x0a8:  mov    %eax,(%esp)
088aee79 +0x0ab:  call   088aef52 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility(std::vector<STAvatarHiddenAbilityVariation, std::allocator<STAvatarHiddenAbilityVariation> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
088aee7e +0x0b0:  xor    $0x1,%eax
088aee81 +0x0b3:  test   %al,%al
088aee83 +0x0b5:  je     088aee44 <+0x76>
088aee85 +0x0b7:  jmp    088aee0d <+0x3f>
088aee87 +0x0b9:  movl   $"[rare]",0x4(%esp)
088aee8f +0x0c1:  lea    -0x10(%ebp),%eax
088aee92 +0x0c4:  mov    %eax,(%esp)
088aee95 +0x0c7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088aee9a +0x0cc:  test   %al,%al
088aee9c +0x0ce:  je     088aeee9 <+0x11b>
088aee9e +0x0d0:  jmp    088aeea1 <+0xd3>
088aeea0 +0x0d2:  nop
088aeea1 +0x0d3:  movl   $0x1,0x4(%esp)
088aeea9 +0x0db:  lea    -0x10(%ebp),%eax
088aeeac +0x0de:  mov    %eax,(%esp)
088aeeaf +0x0e1:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088aeeb4 +0x0e6:  xor    $0x1,%eax
088aeeb7 +0x0e9:  test   %al,%al
088aeeb9 +0x0eb:  je     088aeec1 <+0xf3>
088aeebb +0x0ed:  nop
088aeebc +0x0ee:  jmp    088aee0d <+0x3f>
088aeec1 +0x0f3:  mov    0x8(%ebp),%eax
088aeec4 +0x0f6:  lea    0x24(%eax),%edx
088aeec7 +0x0f9:  lea    -0x10(%ebp),%eax
088aeeca +0x0fc:  mov    %eax,0x8(%esp)
088aeece +0x100:  mov    %edx,0x4(%esp)
088aeed2 +0x104:  mov    0x8(%ebp),%eax
088aeed5 +0x107:  mov    %eax,(%esp)
088aeed8 +0x10a:  call   088aef52 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility(std::vector<STAvatarHiddenAbilityVariation, std::allocator<STAvatarHiddenAbilityVariation> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
088aeedd +0x10f:  xor    $0x1,%eax
088aeee0 +0x112:  test   %al,%al
088aeee2 +0x114:  je     088aeea0 <+0xd2>
088aeee4 +0x116:  jmp    088aee0d <+0x3f>
088aeee9 +0x11b:  movl   $"[mystic circle]",0x4(%esp)
088aeef1 +0x123:  lea    -0x10(%ebp),%eax
088aeef4 +0x126:  mov    %eax,(%esp)
088aeef7 +0x129:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088aeefc +0x12e:  test   %al,%al
088aeefe +0x130:  je     088aee0c <+0x3e>
088aef04 +0x136:  movl   $0x0,(%esp)
088aef0b +0x13d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088aef10 +0x142:  mov    0x8(%ebp),%edx
088aef13 +0x145:  mov    %eax,0x48(%edx)
088aef16 +0x148:  jmp    088aee0d <+0x3f>
088aef1b +0x14d:  nop
088aef1c +0x14e:  mov    $0x0,%ebx
088aef21 +0x153:  lea    -0x10(%ebp),%eax
088aef24 +0x156:  mov    %eax,(%esp)
088aef27 +0x159:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088aef2c +0x15e:  jmp    088aef49 <+0x17b>
088aef2e +0x160:  mov    %edx,%ebx
088aef30 +0x162:  mov    %eax,%esi
088aef32 +0x164:  lea    -0x10(%ebp),%eax
088aef35 +0x167:  mov    %eax,(%esp)
088aef38 +0x16a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088aef3d +0x16f:  mov    %esi,%eax
088aef3f +0x171:  mov    %ebx,%edx
088aef41 +0x173:  mov    %eax,(%esp)
088aef44 +0x176:  call   08ae3750 <_Unwind_Resume>
088aef49 +0x17b:  mov    %ebx,%eax
088aef4b +0x17d:  add    $0x20,%esp
088aef4e +0x180:  pop    %ebx
088aef4f +0x181:  pop    %esi
088aef50 +0x182:  pop    %ebp
088aef51 +0x183:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript @ 0x88aedce

/* ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript() */

undefined4 __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript(AvatarFixedHiddenOption *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  string local_14;
  undefined1 local_d;
  
  cVar1 = loadRDARScriptFile("Etc/Avatar_Roulette/","AvatarFixedHiddenOptionList.etc");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
    local_d = 0;
LAB_088aee0d:
                    /* try { // try from 088aee1b to 088aef0f has its CatchHandler @ 088aef2e */
    cVar1 = ScanType((string *)&local_14,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[upper]");
      if (bVar2) {
        do {
          cVar1 = ScanType((string *)&local_14,true);
          if (cVar1 != '\x01') break;
          cVar1 = parseAbility(this,(vector *)(this + 0x18),(string *)&local_14);
        } while (cVar1 == '\x01');
      }
      else {
        bVar2 = std::operator==(&local_14,"[rare]");
        if (bVar2) {
          do {
            cVar1 = ScanType((string *)&local_14,true);
            if (cVar1 != '\x01') break;
            cVar1 = parseAbility(this,(vector *)(this + 0x24),(string *)&local_14);
          } while (cVar1 == '\x01');
        }
        else {
          bVar2 = std::operator==(&local_14,"[mystic circle]");
          if (bVar2) {
            uVar3 = ScanInt((bool *)0x0);
            *(undefined4 *)(this + 0x48) = uVar3;
          }
        }
      }
      goto LAB_088aee0d;
    }
    uVar3 = 0;
    std::string::~string((string *)&local_14);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
