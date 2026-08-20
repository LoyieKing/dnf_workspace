# MakeStateInfo

`_ZN7WarRoom13MakeStateInfoEPc`

`WarRoom::MakeStateInfo(char*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086be07a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086be07a  _ZN7WarRoom13MakeStateInfoEPc
#           WarRoom::MakeStateInfo(char*)
# range [0x086be07a, 0x086be0cb]
086be07a +0x00:  push   %ebp
086be07b +0x01:  mov    %esp,%ebp
086be07d +0x03:  sub    $0x28,%esp
086be080 +0x06:  mov    0xc(%ebp),%eax
086be083 +0x09:  mov    %eax,-0xc(%ebp)
086be086 +0x0c:  mov    0x8(%ebp),%eax
086be089 +0x0f:  mov    0x4(%eax),%edx
086be08c +0x12:  mov    -0xc(%ebp),%eax
086be08f +0x15:  mov    %edx,0x4(%esp)
086be093 +0x19:  mov    %eax,(%esp)
086be096 +0x1c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be09b +0x21:  mov    0x8(%ebp),%eax
086be09e +0x24:  mov    0x144(%eax),%eax
086be0a4 +0x2a:  mov    %eax,%edx
086be0a6 +0x2c:  mov    -0xc(%ebp),%eax
086be0a9 +0x2f:  mov    %edx,0x4(%esp)
086be0ad +0x33:  mov    %eax,(%esp)
086be0b0 +0x36:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086be0b5 +0x3b:  mov    0x8(%ebp),%eax
086be0b8 +0x3e:  mov    0xc(%eax),%edx
086be0bb +0x41:  mov    -0xc(%ebp),%eax
086be0be +0x44:  mov    %edx,0x4(%esp)
086be0c2 +0x48:  mov    %eax,(%esp)
086be0c5 +0x4b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be0ca +0x50:  leave
086be0cb +0x51:  ret
```

## 反编译 C

```c
// WarRoom::MakeStateInfo @ 0x86be07a

/* WarRoom::MakeStateInfo(char*) */

void __thiscall WarRoom::MakeStateInfo(WarRoom *this,char *param_1)

{
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x144));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0xc));
  return;
}
```
