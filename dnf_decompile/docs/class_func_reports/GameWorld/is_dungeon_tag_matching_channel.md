# is_dungeon_tag_matching_channel

`_ZN9GameWorld31is_dungeon_tag_matching_channelEPc`

`GameWorld::is_dungeon_tag_matching_channel(char*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cbbf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cbbf6  _ZN9GameWorld31is_dungeon_tag_matching_channelEPc
#           GameWorld::is_dungeon_tag_matching_channel(char*)
# range [0x086cbbf6, 0x086cbc84]
086cbbf6 +0x00:  push   %ebp
086cbbf7 +0x01:  mov    %esp,%ebp
086cbbf9 +0x03:  push   %ebx
086cbbfa +0x04:  sub    $0x24,%esp
086cbbfd +0x07:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cbc02 +0x0c:  mov    %eax,(%esp)
086cbc05 +0x0f:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
086cbc0a +0x14:  mov    %eax,-0x10(%ebp)
086cbc0d +0x17:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cbc12 +0x1c:  mov    %eax,(%esp)
086cbc15 +0x1f:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
086cbc1a +0x24:  mov    %eax,%ebx
086cbc1c +0x26:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cbc21 +0x2b:  mov    0x378(%eax),%eax
086cbc27 +0x31:  movzbl %al,%eax
086cbc2a +0x34:  mov    %ebx,0x8(%esp)
086cbc2e +0x38:  mov    %eax,0x4(%esp)
086cbc32 +0x3c:  mov    -0x10(%ebp),%eax
086cbc35 +0x3f:  mov    %eax,(%esp)
086cbc38 +0x42:  call   088dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>  ; channel_script_t::getChannelInfo(unsigned char, unsigned int) const
086cbc3d +0x47:  mov    %eax,-0xc(%ebp)
086cbc40 +0x4a:  cmpl   $0x0,-0xc(%ebp)
086cbc44 +0x4e:  jne    086cbc4d <+0x57>
086cbc46 +0x50:  mov    $0x0,%eax
086cbc4b +0x55:  jmp    086cbc7f <+0x89>
086cbc4d +0x57:  mov    -0xc(%ebp),%eax
086cbc50 +0x5a:  add    $0x8,%eax
086cbc53 +0x5d:  mov    %eax,(%esp)
086cbc56 +0x60:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086cbc5b +0x65:  mov    %eax,0x4(%esp)
086cbc5f +0x69:  mov    0xc(%ebp),%eax
086cbc62 +0x6c:  mov    %eax,(%esp)
086cbc65 +0x6f:  call   0807e4e0 <_init+0xdd8>
086cbc6a +0x74:  test   %eax,%eax
086cbc6c +0x76:  sete   %al
086cbc6f +0x79:  test   %al,%al
086cbc71 +0x7b:  je     086cbc7a <+0x84>
086cbc73 +0x7d:  mov    $0x1,%eax
086cbc78 +0x82:  jmp    086cbc7f <+0x89>
086cbc7a +0x84:  mov    $0x0,%eax
086cbc7f +0x89:  add    $0x24,%esp
086cbc82 +0x8c:  pop    %ebx
086cbc83 +0x8d:  pop    %ebp
086cbc84 +0x8e:  ret
```

## 反编译 C

```c
// GameWorld::is_dungeon_tag_matching_channel @ 0x86cbbf6

/* GameWorld::is_dungeon_tag_matching_channel(char*) */

undefined4 __thiscall GameWorld::is_dungeon_tag_matching_channel(GameWorld *this,char *param_1)

{
  CDataManager *this_00;
  channel_script_t *this_01;
  CEnvironment *this_02;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s2;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (channel_script_t *)CDataManager::GetChannelScript(this_00);
  this_02 = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_channel_no(this_02);
  iVar2 = G_CEnvironment();
  iVar2 = channel_script_t::getChannelInfo(this_01,(uchar)*(undefined4 *)(iVar2 + 0x378),uVar1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    __s2 = (char *)std::string::c_str((string *)(iVar2 + 8));
    iVar2 = strcmp(param_1,__s2);
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
