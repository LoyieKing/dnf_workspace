# loadScript

`_ZN23DeleteInvalidItemScript10loadScriptEv`

`DeleteInvalidItemScript::loadScript()`

| 类 | 地址 |
|---|---|
| `DeleteInvalidItemScript` | `0x08ac1e60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac1e60  _ZN23DeleteInvalidItemScript10loadScriptEv
#           DeleteInvalidItemScript::loadScript()
# range [0x08ac1e60, 0x08ac2065]
08ac1e60 +0x000:  push   %ebp
08ac1e61 +0x001:  mov    %esp,%ebp
08ac1e63 +0x003:  push   %esi
08ac1e64 +0x004:  push   %ebx
08ac1e65 +0x005:  sub    $0x60,%esp
08ac1e68 +0x008:  movl   $"tw_DeleteInvalidItem.etc",0x4(%esp)
08ac1e70 +0x010:  movl   $"Etc/",(%esp)
08ac1e77 +0x017:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08ac1e7c +0x01c:  xor    $0x1,%eax
08ac1e7f +0x01f:  test   %al,%al
08ac1e81 +0x021:  je     08ac1e8d <+0x2d>
08ac1e83 +0x023:  mov    $0x0,%ebx
08ac1e88 +0x028:  jmp    08ac205a <+0x1fa>
08ac1e8d +0x02d:  lea    -0x3c(%ebp),%eax
08ac1e90 +0x030:  mov    %eax,(%esp)
08ac1e93 +0x033:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ac1e98 +0x038:  movb   $0x0,-0x3d(%ebp)
08ac1e9c +0x03c:  lea    -0x50(%ebp),%eax
08ac1e9f +0x03f:  mov    %eax,(%esp)
08ac1ea2 +0x042:  call   08ac220c <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x1d>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x1d
08ac1ea7 +0x047:  jmp    08ac1eb0 <+0x50>
08ac1ea9 +0x049:  nop
08ac1eaa +0x04a:  jmp    08ac1eb0 <+0x50>
08ac1eac +0x04c:  nop
08ac1ead +0x04d:  jmp    08ac1eb0 <+0x50>
08ac1eaf +0x04f:  nop
08ac1eb0 +0x050:  movl   $0x1,0x4(%esp)
08ac1eb8 +0x058:  lea    -0x3c(%ebp),%eax
08ac1ebb +0x05b:  mov    %eax,(%esp)
08ac1ebe +0x05e:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ac1ec3 +0x063:  xor    $0x1,%eax
08ac1ec6 +0x066:  test   %al,%al
08ac1ec8 +0x068:  jne    08ac2027 <+0x1c7>
08ac1ece +0x06e:  movl   $"[delete item]",0x4(%esp)
08ac1ed6 +0x076:  lea    -0x3c(%ebp),%eax
08ac1ed9 +0x079:  mov    %eax,(%esp)
08ac1edc +0x07c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac1ee1 +0x081:  test   %al,%al
08ac1ee3 +0x083:  je     08ac1fb4 <+0x154>
08ac1ee9 +0x089:  lea    -0x3d(%ebp),%eax
08ac1eec +0x08c:  mov    %eax,(%esp)
08ac1eef +0x08f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ac1ef4 +0x094:  mov    %eax,-0x44(%ebp)
08ac1ef7 +0x097:  movzbl -0x3d(%ebp),%eax
08ac1efb +0x09b:  xor    $0x1,%eax
08ac1efe +0x09e:  test   %al,%al
08ac1f00 +0x0a0:  je     08ac1f07 <+0xa7>
08ac1f02 +0x0a2:  jmp    08ac1faf <+0x14f>
08ac1f07 +0x0a7:  lea    -0x3d(%ebp),%eax
08ac1f0a +0x0aa:  mov    %eax,(%esp)
08ac1f0d +0x0ad:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ac1f12 +0x0b2:  mov    %eax,-0x10(%ebp)
08ac1f15 +0x0b5:  movzbl -0x3d(%ebp),%eax
08ac1f19 +0x0b9:  xor    $0x1,%eax
08ac1f1c +0x0bc:  test   %al,%al
08ac1f1e +0x0be:  je     08ac1f25 <+0xc5>
08ac1f20 +0x0c0:  jmp    08ac1faf <+0x14f>
08ac1f25 +0x0c5:  lea    -0x3d(%ebp),%eax
08ac1f28 +0x0c8:  mov    %eax,(%esp)
08ac1f2b +0x0cb:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08ac1f30 +0x0d0:  mov    %eax,-0xc(%ebp)
08ac1f33 +0x0d3:  movzbl -0x3d(%ebp),%eax
08ac1f37 +0x0d7:  xor    $0x1,%eax
08ac1f3a +0x0da:  test   %al,%al
08ac1f3c +0x0dc:  je     08ac1f40 <+0xe0>
08ac1f3e +0x0de:  jmp    08ac1faf <+0x14f>
08ac1f40 +0x0e0:  lea    -0x50(%ebp),%eax
08ac1f43 +0x0e3:  mov    %eax,(%esp)
08ac1f46 +0x0e6:  call   08ac2220 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x31>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x31
08ac1f4b +0x0eb:  mov    -0x44(%ebp),%eax
08ac1f4e +0x0ee:  mov    %eax,-0x50(%ebp)
08ac1f51 +0x0f1:  mov    -0x10(%ebp),%eax
08ac1f54 +0x0f4:  mov    %eax,-0x4c(%ebp)
08ac1f57 +0x0f7:  mov    -0xc(%ebp),%eax
08ac1f5a +0x0fa:  mov    %eax,-0x48(%ebp)
08ac1f5d +0x0fd:  lea    -0x20(%ebp),%eax
08ac1f60 +0x100:  lea    -0x50(%ebp),%edx
08ac1f63 +0x103:  mov    %edx,0x8(%esp)
08ac1f67 +0x107:  lea    -0x44(%ebp),%edx
08ac1f6a +0x10a:  mov    %edx,0x4(%esp)
08ac1f6e +0x10e:  mov    %eax,(%esp)
08ac1f71 +0x111:  call   08ac22cf <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0xe0>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0xe0
08ac1f76 +0x116:  sub    $0x4,%esp
08ac1f79 +0x119:  lea    -0x20(%ebp),%eax
08ac1f7c +0x11c:  mov    %eax,0x4(%esp)
08ac1f80 +0x120:  lea    -0x30(%ebp),%eax
08ac1f83 +0x123:  mov    %eax,(%esp)
08ac1f86 +0x126:  call   08ac230e <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x11f>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x11f
08ac1f8b +0x12b:  mov    0x8(%ebp),%eax
08ac1f8e +0x12e:  lea    0x8(%eax),%ecx
08ac1f91 +0x131:  lea    -0x38(%ebp),%eax
08ac1f94 +0x134:  lea    -0x30(%ebp),%edx
08ac1f97 +0x137:  mov    %edx,0x8(%esp)
08ac1f9b +0x13b:  mov    %ecx,0x4(%esp)
08ac1f9f +0x13f:  mov    %eax,(%esp)
08ac1fa2 +0x142:  call   08ac234a <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x15b>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x15b
08ac1fa7 +0x147:  sub    $0x4,%esp
08ac1faa +0x14a:  jmp    08ac1ee9 <+0x89>
08ac1faf +0x14f:  jmp    08ac1eb0 <+0x50>
08ac1fb4 +0x154:  movl   $"[send mail title]",0x4(%esp)
08ac1fbc +0x15c:  lea    -0x3c(%ebp),%eax
08ac1fbf +0x15f:  mov    %eax,(%esp)
08ac1fc2 +0x162:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac1fc7 +0x167:  test   %al,%al
08ac1fc9 +0x169:  je     08ac1fea <+0x18a>
08ac1fcb +0x16b:  mov    0x8(%ebp),%eax
08ac1fce +0x16e:  mov    %eax,(%esp)
08ac1fd1 +0x171:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08ac1fd6 +0x176:  mov    %al,-0x3d(%ebp)
08ac1fd9 +0x179:  movzbl -0x3d(%ebp),%eax
08ac1fdd +0x17d:  xor    $0x1,%eax
08ac1fe0 +0x180:  test   %al,%al
08ac1fe2 +0x182:  je     08ac1ea9 <+0x49>
08ac1fe8 +0x188:  jmp    08ac2028 <+0x1c8>
08ac1fea +0x18a:  movl   $"[send mail content]",0x4(%esp)
08ac1ff2 +0x192:  lea    -0x3c(%ebp),%eax
08ac1ff5 +0x195:  mov    %eax,(%esp)
08ac1ff8 +0x198:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac1ffd +0x19d:  test   %al,%al
08ac1fff +0x19f:  je     08ac1eac <+0x4c>
08ac2005 +0x1a5:  mov    0x8(%ebp),%eax
08ac2008 +0x1a8:  add    $0x4,%eax
08ac200b +0x1ab:  mov    %eax,(%esp)
08ac200e +0x1ae:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08ac2013 +0x1b3:  mov    %al,-0x3d(%ebp)
08ac2016 +0x1b6:  movzbl -0x3d(%ebp),%eax
08ac201a +0x1ba:  xor    $0x1,%eax
08ac201d +0x1bd:  test   %al,%al
08ac201f +0x1bf:  je     08ac1eaf <+0x4f>
08ac2025 +0x1c5:  jmp    08ac2028 <+0x1c8>
08ac2027 +0x1c7:  nop
08ac2028 +0x1c8:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
08ac202d +0x1cd:  mov    $0x1,%ebx
08ac2032 +0x1d2:  lea    -0x3c(%ebp),%eax
08ac2035 +0x1d5:  mov    %eax,(%esp)
08ac2038 +0x1d8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac203d +0x1dd:  jmp    08ac205a <+0x1fa>
08ac203f +0x1df:  mov    %edx,%ebx
08ac2041 +0x1e1:  mov    %eax,%esi
08ac2043 +0x1e3:  lea    -0x3c(%ebp),%eax
08ac2046 +0x1e6:  mov    %eax,(%esp)
08ac2049 +0x1e9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac204e +0x1ee:  mov    %esi,%eax
08ac2050 +0x1f0:  mov    %ebx,%edx
08ac2052 +0x1f2:  mov    %eax,(%esp)
08ac2055 +0x1f5:  call   08ae3750 <_Unwind_Resume>
08ac205a +0x1fa:  mov    %ebx,%eax
08ac205c +0x1fc:  lea    -0x8(%ebp),%esp
08ac205f +0x1ff:  add    $0x0,%esp
08ac2062 +0x202:  pop    %ebx
08ac2063 +0x203:  pop    %esi
08ac2064 +0x204:  pop    %ebp
08ac2065 +0x205:  ret
```

## 反编译 C

```c
// DeleteInvalidItemScript::loadScript @ 0x8ac1e60

/* DeleteInvalidItemScript::loadScript() */

undefined4 __thiscall DeleteInvalidItemScript::loadScript(DeleteInvalidItemScript *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  bool local_41;
  string local_40;
  pair local_3c [8];
  pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData> local_34 [16];
  int local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile("Etc/","tw_DeleteInvalidItem.etc");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_40);
    local_41 = false;
    DeleteInvalidItemData::DeleteInvalidItemData((DeleteInvalidItemData *)&local_54);
    do {
      while( true ) {
        while( true ) {
                    /* try { // try from 08ac1ebe to 08ac202c has its CatchHandler @ 08ac203f */
          cVar1 = ScanType((string *)&local_40,true);
          if (cVar1 != '\x01') goto LAB_08ac2028;
          bVar2 = std::operator==(&local_40,"[delete item]");
          if (!bVar2) break;
          while (((local_48 = ScanInt(&local_41), local_41 == true &&
                  (local_14 = ScanInt(&local_41), local_41 == true)) &&
                 (local_10 = ScanInt(&local_41), local_41 == true))) {
            DeleteInvalidItemData::init((DeleteInvalidItemData *)&local_54);
            local_54 = local_48;
            local_50 = local_14;
            local_4c = local_10;
            std::make_pair<int&,DeleteInvalidItemScript::DeleteInvalidItemData&>
                      (local_24,(DeleteInvalidItemData *)&local_48);
            std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>::
            pair<int,DeleteInvalidItemScript::DeleteInvalidItemData>(local_34,(pair *)local_24);
            std::
            map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
            ::insert(local_3c);
          }
        }
        bVar2 = std::operator==(&local_40,"[send mail title]");
        if (bVar2) break;
        bVar2 = std::operator==(&local_40,"[send mail content]");
        if ((bVar2) && (local_41 = (bool)ScanStr((string *)(this + 4)), local_41 != true))
        goto LAB_08ac2028;
      }
      local_41 = (bool)ScanStr((string *)this);
    } while (local_41 == true);
LAB_08ac2028:
    unloadRDARScriptFile();
    uVar3 = 1;
    std::string::~string((string *)&local_40);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
