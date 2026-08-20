# OnConnectP2PTimeout

`_ZN18online_preliminary18COnlinePreliminary19OnConnectP2PTimeoutEP8PvP_Room`

`online_preliminary::COnlinePreliminary::OnConnectP2PTimeout(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561dee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561dee  _ZN18online_preliminary18COnlinePreliminary19OnConnectP2PTimeoutEP8PvP_Room
#           online_preliminary::COnlinePreliminary::OnConnectP2PTimeout(PvP_Room*)
# range [0x08561dee, 0x08561e35]
08561dee +0x00:  push   %ebp
08561def +0x01:  mov    %esp,%ebp
08561df1 +0x03:  sub    $0x18,%esp
08561df4 +0x06:  mov    0x8(%ebp),%eax
08561df7 +0x09:  mov    0x4(%eax),%eax
08561dfa +0x0c:  cmp    $0x4,%eax
08561dfd +0x0f:  jne    08561e33 <+0x45>
08561dff +0x11:  movl   $0x2,0x8(%esp)
08561e07 +0x19:  movl   $0x4,0x4(%esp)
08561e0f +0x21:  mov    0x8(%ebp),%eax
08561e12 +0x24:  mov    %eax,(%esp)
08561e15 +0x27:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
08561e1a +0x2c:  mov    0x8(%ebp),%eax
08561e1d +0x2f:  mov    (%eax),%eax
08561e1f +0x31:  add    $0x40,%eax
08561e22 +0x34:  mov    (%eax),%edx
08561e24 +0x36:  mov    0xc(%ebp),%eax
08561e27 +0x39:  mov    %eax,0x4(%esp)
08561e2b +0x3d:  mov    0x8(%ebp),%eax
08561e2e +0x40:  mov    %eax,(%esp)
08561e31 +0x43:  call   *%edx
08561e33 +0x45:  leave
08561e34 +0x46:  ret
08561e35 +0x47:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnConnectP2PTimeout @ 0x8561dee

/* online_preliminary::COnlinePreliminary::OnConnectP2PTimeout(PvP_Room*) */

void __thiscall
online_preliminary::COnlinePreliminary::OnConnectP2PTimeout
          (COnlinePreliminary *this,PvP_Room *param_1)

{
  if (*(int *)(this + 4) == 4) {
    _SendMatchStatePacket(this,4,2);
    (**(code **)(*(int *)this + 0x40))(this,param_1);
  }
  return;
}
```
