# OnJoinRoom

`_ZN18online_preliminary18COnlinePreliminary10OnJoinRoomEP5CUser`

`online_preliminary::COnlinePreliminary::OnJoinRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560bba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560bba  _ZN18online_preliminary18COnlinePreliminary10OnJoinRoomEP5CUser
#           online_preliminary::COnlinePreliminary::OnJoinRoom(CUser*)
# range [0x08560bba, 0x08560be1]
08560bba +0x00:  push   %ebp
08560bbb +0x01:  mov    %esp,%ebp
08560bbd +0x03:  sub    $0x8,%esp
08560bc0 +0x06:  mov    0x8(%ebp),%eax
08560bc3 +0x09:  mov    0x4(%eax),%eax
08560bc6 +0x0c:  cmp    $0x3,%eax
08560bc9 +0x0f:  je     08560be0 <+0x26>
08560bcb +0x11:  mov    0x8(%ebp),%eax
08560bce +0x14:  lea    0x1c(%eax),%edx
08560bd1 +0x17:  mov    0xc(%ebp),%eax
08560bd4 +0x1a:  mov    %eax,0x4(%esp)
08560bd8 +0x1e:  mov    %edx,(%esp)
08560bdb +0x21:  call   0855fdfe <_ZN14TeamInfoSecond3addEP5CUser>  ; TeamInfoSecond::add(CUser*)
08560be0 +0x26:  leave
08560be1 +0x27:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnJoinRoom @ 0x8560bba

/* online_preliminary::COnlinePreliminary::OnJoinRoom(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::OnJoinRoom(COnlinePreliminary *this,CUser *param_1)

{
  if (*(int *)(this + 4) != 3) {
    TeamInfoSecond::add((TeamInfoSecond *)(this + 0x1c),param_1);
  }
  return;
}
```
