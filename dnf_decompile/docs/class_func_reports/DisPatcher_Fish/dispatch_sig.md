# dispatch_sig

`_ZN15DisPatcher_Fish12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_Fish::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_Fish` | `0x081eddf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081eddf6  _ZN15DisPatcher_Fish12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_Fish::dispatch_sig(CUser*, PacketBuf&)
# range [0x081eddf6, 0x081ede33]
081eddf6 +0x00:  push   %ebp
081eddf7 +0x01:  mov    %esp,%ebp
081eddf9 +0x03:  sub    $0x18,%esp
081eddfc +0x06:  mov    0xc(%ebp),%eax
081eddff +0x09:  mov    %eax,(%esp)
081ede02 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ede07 +0x11:  cmp    $0x4,%eax
081ede0a +0x14:  setne  %al
081ede0d +0x17:  test   %al,%al
081ede0f +0x19:  je     081ede18 <+0x22>
081ede11 +0x1b:  mov    $0x0,%eax
081ede16 +0x20:  jmp    081ede31 <+0x3b>
081ede18 +0x22:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ede1d +0x27:  mov    0xc(%ebp),%edx
081ede20 +0x2a:  mov    %edx,0x4(%esp)
081ede24 +0x2e:  mov    %eax,(%esp)
081ede27 +0x31:  call   086c7af8 <_ZN9GameWorld7fishingEP5CUser>  ; GameWorld::fishing(CUser*)
081ede2c +0x36:  mov    $0x0,%eax
081ede31 +0x3b:  leave
081ede32 +0x3c:  ret
081ede33 +0x3d:  nop
```

## 反编译 C

```c
// DisPatcher_Fish::dispatch_sig @ 0x81eddf6

/* DisPatcher_Fish::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_Fish::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  GameWorld *this;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 4) {
    this = (GameWorld *)G_GameWorld();
    GameWorld::fishing(this,(CUser *)param_2);
  }
  return 0;
}
```
