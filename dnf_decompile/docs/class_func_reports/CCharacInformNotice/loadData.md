# loadData

`_ZN19CCharacInformNotice8loadDataEP5CUserPc`

`CCharacInformNotice::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e4ade` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4ade  _ZN19CCharacInformNotice8loadDataEP5CUserPc
#           CCharacInformNotice::loadData(CUser*, char*)
# range [0x080e4ade, 0x080e4b2b]
080e4ade +0x00:  push   %ebp
080e4adf +0x01:  mov    %esp,%ebp
080e4ae1 +0x03:  sub    $0x18,%esp
080e4ae4 +0x06:  mov    0x8(%ebp),%eax
080e4ae7 +0x09:  mov    (%eax),%eax
080e4ae9 +0x0b:  add    $0x1c,%eax
080e4aec +0x0e:  mov    (%eax),%edx
080e4aee +0x10:  mov    0x8(%ebp),%eax
080e4af1 +0x13:  mov    %eax,(%esp)
080e4af4 +0x16:  call   *%edx
080e4af6 +0x18:  mov    0x8(%ebp),%eax
080e4af9 +0x1b:  lea    0x5(%eax),%edx
080e4afc +0x1e:  movl   $0x10,0x8(%esp)
080e4b04 +0x26:  mov    0x10(%ebp),%eax
080e4b07 +0x29:  mov    %eax,0x4(%esp)
080e4b0b +0x2d:  mov    %edx,(%esp)
080e4b0e +0x30:  call   0807d8a0 <_init+0x198>
080e4b13 +0x35:  mov    0xc(%ebp),%eax
080e4b16 +0x38:  mov    %eax,0x4(%esp)
080e4b1a +0x3c:  mov    0x8(%ebp),%eax
080e4b1d +0x3f:  mov    %eax,(%esp)
080e4b20 +0x42:  call   080e4994 <_ZN19CCharacInformNotice20sendInformNoticeFlagEP5CUser>  ; CCharacInformNotice::sendInformNoticeFlag(CUser*)
080e4b25 +0x47:  mov    $0x1,%eax
080e4b2a +0x4c:  leave
080e4b2b +0x4d:  ret
```

## 反编译 C

```c
// CCharacInformNotice::loadData @ 0x80e4ade

/* CCharacInformNotice::loadData(CUser*, char*) */

undefined4 __thiscall
CCharacInformNotice::loadData(CCharacInformNotice *this,CUser *param_1,char *param_2)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  memcpy(this + 5,param_2,0x10);
  sendInformNoticeFlag(this,param_1);
  return 1;
}
```
