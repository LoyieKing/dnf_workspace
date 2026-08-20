# getIPGStatus

`_ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE`

`WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x080ffae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ffae0  _ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE
#           WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)
# range [0x080ffae0, 0x080ffb09]
080ffae0 +0x00:  push   %ebp
080ffae1 +0x01:  mov    %esp,%ebp
080ffae3 +0x03:  sub    $0x18,%esp
080ffae6 +0x06:  mov    0x8(%ebp),%eax
080ffae9 +0x09:  mov    0x4(%eax),%eax
080ffaec +0x0c:  test   %eax,%eax
080ffaee +0x0e:  je     080ffb07 <+0x27>
080ffaf0 +0x10:  mov    0x8(%ebp),%eax
080ffaf3 +0x13:  mov    0x4(%eax),%eax
080ffaf6 +0x16:  mov    0xc(%ebp),%edx
080ffaf9 +0x19:  mov    %edx,0x4(%esp)
080ffafd +0x1d:  mov    %eax,(%esp)
080ffb00 +0x20:  call   081010ae <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xd0>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xd0
080ffb05 +0x25:  jmp    080ffb08 <+0x28>
080ffb07 +0x27:  nop
080ffb08 +0x28:  leave
080ffb09 +0x29:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::getIPGStatus @ 0x80ffae0

/* WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&) */

void __thiscall WongWork::IPG::CIPGHelper::getIPGStatus(CIPGHelper *this,stIPGStatus_t *param_1)

{
  if (*(int *)(this + 4) != 0) {
    CIPGMgr::getIPGStatus(*(CIPGMgr **)(this + 4),param_1);
  }
  return;
}
```
