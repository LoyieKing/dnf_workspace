# resetBlueMarbleUserInfo

`_ZN18BlueMarbleUserInfo23resetBlueMarbleUserInfoEv`

`BlueMarbleUserInfo::resetBlueMarbleUserInfo()`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6b08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6b08  _ZN18BlueMarbleUserInfo23resetBlueMarbleUserInfoEv
#           BlueMarbleUserInfo::resetBlueMarbleUserInfo()
# range [0x080d6b08, 0x080d6b4d]
080d6b08 +0x00:  push   %ebp
080d6b09 +0x01:  mov    %esp,%ebp
080d6b0b +0x03:  sub    $0x18,%esp
080d6b0e +0x06:  mov    0x8(%ebp),%eax
080d6b11 +0x09:  movl   $0x0,(%eax)
080d6b17 +0x0f:  mov    0x8(%ebp),%eax
080d6b1a +0x12:  movl   $0x0,0x4(%eax)
080d6b21 +0x19:  mov    0x8(%ebp),%eax
080d6b24 +0x1c:  movl   $0x1,0x8(%eax)
080d6b2b +0x23:  mov    0x8(%ebp),%eax
080d6b2e +0x26:  movl   $0x4,0xc(%eax)
080d6b35 +0x2d:  mov    0x8(%ebp),%eax
080d6b38 +0x30:  mov    %eax,(%esp)
080d6b3b +0x33:  call   080d6b4e <_ZN18BlueMarbleUserInfo9resetBuffEv>  ; BlueMarbleUserInfo::resetBuff()
080d6b40 +0x38:  mov    0x8(%ebp),%eax
080d6b43 +0x3b:  mov    %eax,(%esp)
080d6b46 +0x3e:  call   080d6b64 <_ZN18BlueMarbleUserInfo10resetIndexEv>  ; BlueMarbleUserInfo::resetIndex()
080d6b4b +0x43:  leave
080d6b4c +0x44:  ret
080d6b4d +0x45:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::resetBlueMarbleUserInfo @ 0x80d6b08

/* BlueMarbleUserInfo::resetBlueMarbleUserInfo() */

void __thiscall BlueMarbleUserInfo::resetBlueMarbleUserInfo(BlueMarbleUserInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 4;
  resetBuff(this);
  resetIndex(this);
  return;
}
```
