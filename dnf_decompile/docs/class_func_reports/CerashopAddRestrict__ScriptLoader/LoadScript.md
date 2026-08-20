# LoadScript

`_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv`

`CerashopAddRestrict::ScriptLoader::LoadScript()`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::ScriptLoader` | `0x08abf3cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08abf3cc  _ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv
#           CerashopAddRestrict::ScriptLoader::LoadScript()
# range [0x08abf3cc, 0x08abf4dd]
08abf3cc +0x000:  push   %ebp
08abf3cd +0x001:  mov    %esp,%ebp
08abf3cf +0x003:  push   %esi
08abf3d0 +0x004:  push   %ebx
08abf3d1 +0x005:  sub    $0x20,%esp
08abf3d4 +0x008:  movl   $"NewCashShop_Restrict.etc",0x4(%esp)
08abf3dc +0x010:  movl   $"Etc/",(%esp)
08abf3e3 +0x017:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08abf3e8 +0x01c:  xor    $0x1,%eax
08abf3eb +0x01f:  test   %al,%al
08abf3ed +0x021:  je     08abf3f9 <+0x2d>
08abf3ef +0x023:  mov    $0xffffffff,%ebx
08abf3f4 +0x028:  jmp    08abf4d5 <+0x109>
08abf3f9 +0x02d:  lea    -0x10(%ebp),%eax
08abf3fc +0x030:  mov    %eax,(%esp)
08abf3ff +0x033:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08abf404 +0x038:  movb   $0x0,-0xb(%ebp)
08abf408 +0x03c:  movb   $0x0,-0xa(%ebp)
08abf40c +0x040:  movb   $0x0,-0x9(%ebp)
08abf410 +0x044:  jmp    08abf419 <+0x4d>
08abf412 +0x046:  nop
08abf413 +0x047:  jmp    08abf419 <+0x4d>
08abf415 +0x049:  nop
08abf416 +0x04a:  jmp    08abf419 <+0x4d>
08abf418 +0x04c:  nop
08abf419 +0x04d:  movl   $0x1,0x4(%esp)
08abf421 +0x055:  lea    -0x10(%ebp),%eax
08abf424 +0x058:  mov    %eax,(%esp)
08abf427 +0x05b:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08abf42c +0x060:  xor    $0x1,%eax
08abf42f +0x063:  test   %al,%al
08abf431 +0x065:  jne    08abf4a7 <+0xdb>
08abf433 +0x067:  movl   $"[account restrict]",0x4(%esp)
08abf43b +0x06f:  lea    -0x10(%ebp),%eax
08abf43e +0x072:  mov    %eax,(%esp)
08abf441 +0x075:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08abf446 +0x07a:  test   %al,%al
08abf448 +0x07c:  je     08abf46b <+0x9f>
08abf44a +0x07e:  movl   $0x0,0x4(%esp)
08abf452 +0x086:  mov    0x8(%ebp),%eax
08abf455 +0x089:  mov    %eax,(%esp)
08abf458 +0x08c:  call   08abf4de <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE>  ; CerashopAddRestrict::ScriptLoader::LoadScriptDaily(CerashopAddRestrict::RestrictType::T)
08abf45d +0x091:  shr    $0x1f,%eax
08abf460 +0x094:  test   %al,%al
08abf462 +0x096:  je     08abf412 <+0x46>
08abf464 +0x098:  mov    $0xffffffff,%ebx
08abf469 +0x09d:  jmp    08abf4ca <+0xfe>
08abf46b +0x09f:  movl   $"[character restrict]",0x4(%esp)
08abf473 +0x0a7:  lea    -0x10(%ebp),%eax
08abf476 +0x0aa:  mov    %eax,(%esp)
08abf479 +0x0ad:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08abf47e +0x0b2:  test   %al,%al
08abf480 +0x0b4:  je     08abf415 <+0x49>
08abf482 +0x0b6:  movl   $0x1,0x4(%esp)
08abf48a +0x0be:  mov    0x8(%ebp),%eax
08abf48d +0x0c1:  mov    %eax,(%esp)
08abf490 +0x0c4:  call   08abf4de <_ZN19CerashopAddRestrict12ScriptLoader15LoadScriptDailyENS_12RestrictType1TE>  ; CerashopAddRestrict::ScriptLoader::LoadScriptDaily(CerashopAddRestrict::RestrictType::T)
08abf495 +0x0c9:  shr    $0x1f,%eax
08abf498 +0x0cc:  test   %al,%al
08abf49a +0x0ce:  je     08abf418 <+0x4c>
08abf4a0 +0x0d4:  mov    $0xffffffff,%ebx
08abf4a5 +0x0d9:  jmp    08abf4ca <+0xfe>
08abf4a7 +0x0db:  nop
08abf4a8 +0x0dc:  mov    $0x0,%ebx
08abf4ad +0x0e1:  jmp    08abf4ca <+0xfe>
08abf4af +0x0e3:  mov    %edx,%ebx
08abf4b1 +0x0e5:  mov    %eax,%esi
08abf4b3 +0x0e7:  lea    -0x10(%ebp),%eax
08abf4b6 +0x0ea:  mov    %eax,(%esp)
08abf4b9 +0x0ed:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08abf4be +0x0f2:  mov    %esi,%eax
08abf4c0 +0x0f4:  mov    %ebx,%edx
08abf4c2 +0x0f6:  mov    %eax,(%esp)
08abf4c5 +0x0f9:  call   08ae3750 <_Unwind_Resume>
08abf4ca +0x0fe:  lea    -0x10(%ebp),%eax
08abf4cd +0x101:  mov    %eax,(%esp)
08abf4d0 +0x104:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08abf4d5 +0x109:  mov    %ebx,%eax
08abf4d7 +0x10b:  add    $0x20,%esp
08abf4da +0x10e:  pop    %ebx
08abf4db +0x10f:  pop    %esi
08abf4dc +0x110:  pop    %ebp
08abf4dd +0x111:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::ScriptLoader::LoadScript @ 0x8abf3cc

/* CerashopAddRestrict::ScriptLoader::LoadScript() */

undefined4 __thiscall CerashopAddRestrict::ScriptLoader::LoadScript(ScriptLoader *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  string local_14;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  
  cVar1 = loadRDARScriptFile("Etc/","NewCashShop_Restrict.etc");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
    local_f = 0;
    local_e = 0;
    local_d = 0;
    do {
      while( true ) {
                    /* try { // try from 08abf427 to 08abf494 has its CatchHandler @ 08abf4af */
        cVar1 = ScanType((string *)&local_14,true);
        if (cVar1 != '\x01') {
          uVar4 = 0;
          goto LAB_08abf4ca;
        }
        bVar2 = std::operator==(&local_14,"[account restrict]");
        if (!bVar2) break;
        iVar3 = LoadScriptDaily(this,0);
        if (iVar3 < 0) {
          uVar4 = 0xffffffff;
          goto LAB_08abf4ca;
        }
      }
      bVar2 = std::operator==(&local_14,"[character restrict]");
    } while ((!bVar2) || (iVar3 = LoadScriptDaily(this,1), -1 < iVar3));
    uVar4 = 0xffffffff;
LAB_08abf4ca:
    std::string::~string((string *)&local_14);
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}
```
