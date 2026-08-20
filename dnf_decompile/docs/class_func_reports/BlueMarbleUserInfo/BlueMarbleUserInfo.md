# BlueMarbleUserInfo

`_ZN18BlueMarbleUserInfoC1Ev`

`BlueMarbleUserInfo::BlueMarbleUserInfo()`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6a90  _ZN18BlueMarbleUserInfoC1Ev
#           BlueMarbleUserInfo::BlueMarbleUserInfo()
# range [0x080d6a90, 0x080d6b01]
080d6a90 +0x00:  push   %ebp
080d6a91 +0x01:  mov    %esp,%ebp
080d6a93 +0x03:  sub    $0x18,%esp
080d6a96 +0x06:  mov    0x8(%ebp),%eax
080d6a99 +0x09:  movl   $0x0,(%eax)
080d6a9f +0x0f:  mov    0x8(%ebp),%eax
080d6aa2 +0x12:  movl   $0x0,0x4(%eax)
080d6aa9 +0x19:  mov    0x8(%ebp),%eax
080d6aac +0x1c:  movl   $0x1,0x8(%eax)
080d6ab3 +0x23:  mov    0x8(%ebp),%eax
080d6ab6 +0x26:  movl   $0x4,0xc(%eax)
080d6abd +0x2d:  mov    0x8(%ebp),%eax
080d6ac0 +0x30:  add    $0x10,%eax
080d6ac3 +0x33:  mov    %eax,(%esp)
080d6ac6 +0x36:  call   080d9ec0 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5d>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5d
080d6acb +0x3b:  mov    0x8(%ebp),%eax
080d6ace +0x3e:  add    $0x1c,%eax
080d6ad1 +0x41:  mov    %eax,(%esp)
080d6ad4 +0x44:  call   080d9f04 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa1
080d6ad9 +0x49:  mov    0x8(%ebp),%eax
080d6adc +0x4c:  movl   $0x0,0x24(%eax)
080d6ae3 +0x53:  mov    0x8(%ebp),%eax
080d6ae6 +0x56:  add    $0x10,%eax
080d6ae9 +0x59:  mov    %eax,(%esp)
080d6aec +0x5c:  call   080d9ee2 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x7f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x7f
080d6af1 +0x61:  mov    0x8(%ebp),%eax
080d6af4 +0x64:  add    $0x1c,%eax
080d6af7 +0x67:  mov    %eax,(%esp)
080d6afa +0x6a:  call   080d9f1c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xb9>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xb9
080d6aff +0x6f:  leave
080d6b00 +0x70:  ret
080d6b01 +0x71:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::BlueMarbleUserInfo @ 0x80d6a90

/* BlueMarbleUserInfo::BlueMarbleUserInfo() */

void __thiscall BlueMarbleUserInfo::BlueMarbleUserInfo(BlueMarbleUserInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 4;
  BuffInfo::BuffInfo((BuffInfo *)(this + 0x10));
  TileIndexInfo::TileIndexInfo((TileIndexInfo *)(this + 0x1c));
  *(undefined4 *)(this + 0x24) = 0;
  BuffInfo::reset((BuffInfo *)(this + 0x10));
  TileIndexInfo::reset((TileIndexInfo *)(this + 0x1c));
  return;
}
```
