# OnWalkOut

`_ZN18online_preliminary18COnlinePreliminary9OnWalkOutEP8PvP_Roomi`

`online_preliminary::COnlinePreliminary::OnWalkOut(PvP_Room*, int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561f8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561f8c  _ZN18online_preliminary18COnlinePreliminary9OnWalkOutEP8PvP_Roomi
#           online_preliminary::COnlinePreliminary::OnWalkOut(PvP_Room*, int)
# range [0x08561f8c, 0x08561ff1]
08561f8c +0x00:  push   %ebp
08561f8d +0x01:  mov    %esp,%ebp
08561f8f +0x03:  sub    $0x38,%esp
08561f92 +0x06:  mov    0x10(%ebp),%eax
08561f95 +0x09:  mov    %eax,0x4(%esp)
08561f99 +0x0d:  mov    0xc(%ebp),%eax
08561f9c +0x10:  mov    %eax,(%esp)
08561f9f +0x13:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
08561fa4 +0x18:  mov    %eax,-0x10(%ebp)
08561fa7 +0x1b:  mov    0x10(%ebp),%eax
08561faa +0x1e:  mov    %eax,0x4(%esp)
08561fae +0x22:  mov    0xc(%ebp),%eax
08561fb1 +0x25:  mov    %eax,(%esp)
08561fb4 +0x28:  call   085d921e <_ZN8PvP_Room13get_user_seatEi>  ; PvP_Room::get_user_seat(int)
08561fb9 +0x2d:  mov    %eax,-0xc(%ebp)
08561fbc +0x30:  mov    0x8(%ebp),%eax
08561fbf +0x33:  mov    (%eax),%eax
08561fc1 +0x35:  add    $0x2c,%eax
08561fc4 +0x38:  mov    (%eax),%ecx
08561fc6 +0x3a:  mov    -0x10(%ebp),%eax
08561fc9 +0x3d:  mov    0x10(%ebp),%edx
08561fcc +0x40:  mov    %edx,0x10(%esp)
08561fd0 +0x44:  mov    %eax,0xc(%esp)
08561fd4 +0x48:  mov    0xc(%ebp),%eax
08561fd7 +0x4b:  mov    %eax,0x8(%esp)
08561fdb +0x4f:  mov    -0xc(%ebp),%eax
08561fde +0x52:  mov    %eax,0x4(%esp)
08561fe2 +0x56:  mov    0x8(%ebp),%eax
08561fe5 +0x59:  mov    %eax,(%esp)
08561fe8 +0x5c:  call   *%ecx
08561fea +0x5e:  mov    $0x1,%eax
08561fef +0x63:  leave
08561ff0 +0x64:  ret
08561ff1 +0x65:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnWalkOut @ 0x8561f8c

/* online_preliminary::COnlinePreliminary::OnWalkOut(PvP_Room*, int) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnWalkOut
          (COnlinePreliminary *this,PvP_Room *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = PvP_Room::get_team(param_1,param_2);
  uVar2 = PvP_Room::get_user_seat(param_1,param_2);
  (**(code **)(*(int *)this + 0x2c))(this,uVar2,param_1,uVar1,param_2);
  return 1;
}
```
