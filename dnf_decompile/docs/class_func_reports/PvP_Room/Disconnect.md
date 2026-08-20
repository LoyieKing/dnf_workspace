# Disconnect

`_ZN8PvP_Room10DisconnectEP5CUser`

`PvP_Room::Disconnect(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dd754` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dd754  _ZN8PvP_Room10DisconnectEP5CUser
#           PvP_Room::Disconnect(CUser*)
# range [0x085dd754, 0x085dd823]
085dd754 +0x00:  push   %ebp
085dd755 +0x01:  mov    %esp,%ebp
085dd757 +0x03:  sub    $0x38,%esp
085dd75a +0x06:  movl   $0x0,-0xc(%ebp)
085dd761 +0x0d:  jmp    085dd80e <+0xba>
085dd766 +0x12:  mov    -0xc(%ebp),%edx
085dd769 +0x15:  mov    0x8(%ebp),%eax
085dd76c +0x18:  add    $0xc,%edx
085dd76f +0x1b:  mov    (%eax,%edx,4),%eax
085dd772 +0x1e:  test   %eax,%eax
085dd774 +0x20:  je     085dd809 <+0xb5>
085dd77a +0x26:  mov    -0xc(%ebp),%edx
085dd77d +0x29:  mov    0x8(%ebp),%eax
085dd780 +0x2c:  add    $0xc,%edx
085dd783 +0x2f:  mov    (%eax,%edx,4),%eax
085dd786 +0x32:  cmp    0xc(%ebp),%eax
085dd789 +0x35:  jne    085dd80a <+0xb6>
085dd78b +0x37:  mov    0x8(%ebp),%eax
085dd78e +0x3a:  mov    0x6e4(%eax),%eax
085dd794 +0x40:  mov    (%eax),%eax
085dd796 +0x42:  add    $0x44,%eax
085dd799 +0x45:  mov    (%eax),%ecx
085dd79b +0x47:  mov    0x8(%ebp),%eax
085dd79e +0x4a:  mov    0x6e4(%eax),%eax
085dd7a4 +0x50:  mov    -0xc(%ebp),%edx
085dd7a7 +0x53:  mov    %edx,0x8(%esp)
085dd7ab +0x57:  mov    0x8(%ebp),%edx
085dd7ae +0x5a:  mov    %edx,0x4(%esp)
085dd7b2 +0x5e:  mov    %eax,(%esp)
085dd7b5 +0x61:  call   *%ecx
085dd7b7 +0x63:  mov    -0xc(%ebp),%edx
085dd7ba +0x66:  mov    0x8(%ebp),%eax
085dd7bd +0x69:  add    $0xc,%edx
085dd7c0 +0x6c:  mov    (%eax,%edx,4),%eax
085dd7c3 +0x6f:  movl   $0x3,0x10(%esp)
085dd7cb +0x77:  movl   $0xfe,0xc(%esp)
085dd7d3 +0x7f:  mov    -0xc(%ebp),%edx
085dd7d6 +0x82:  mov    %edx,0x8(%esp)
085dd7da +0x86:  mov    %eax,0x4(%esp)
085dd7de +0x8a:  mov    0x8(%ebp),%eax
085dd7e1 +0x8d:  mov    %eax,(%esp)
085dd7e4 +0x90:  call   085dd4a4 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::WalkOut(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
085dd7e9 +0x95:  xor    $0x1,%eax
085dd7ec +0x98:  test   %al,%al
085dd7ee +0x9a:  je     085dd802 <+0xae>
085dd7f0 +0x9c:  mov    0xc(%ebp),%eax
085dd7f3 +0x9f:  mov    %eax,0x4(%esp)
085dd7f7 +0xa3:  mov    0x8(%ebp),%eax
085dd7fa +0xa6:  mov    %eax,(%esp)
085dd7fd +0xa9:  call   085dd6ba <_ZN8PvP_Room12ClearPvPRoomEP5CUser>  ; PvP_Room::ClearPvPRoom(CUser*)
085dd802 +0xae:  mov    $0x1,%eax
085dd807 +0xb3:  jmp    085dd822 <+0xce>
085dd809 +0xb5:  nop
085dd80a +0xb6:  addl   $0x1,-0xc(%ebp)
085dd80e +0xba:  cmpl   $0x7,-0xc(%ebp)
085dd812 +0xbe:  setle  %al
085dd815 +0xc1:  test   %al,%al
085dd817 +0xc3:  jne    085dd766 <+0x12>
085dd81d +0xc9:  mov    $0x0,%eax
085dd822 +0xce:  leave
085dd823 +0xcf:  ret
```

## 反编译 C

```c
// PvP_Room::Disconnect @ 0x85dd754

/* PvP_Room::Disconnect(CUser*) */

undefined4 __thiscall PvP_Room::Disconnect(PvP_Room *this,CUser *param_1)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      return 0;
    }
    if ((*(int *)(this + (local_10 + 0xc) * 4) != 0) &&
       (*(CUser **)(this + (local_10 + 0xc) * 4) == param_1)) break;
    local_10 = local_10 + 1;
  }
  (**(code **)(**(int **)(this + 0x6e4) + 0x44))(*(undefined4 *)(this + 0x6e4),this,local_10);
  cVar1 = WalkOut(this,*(undefined4 *)(this + (local_10 + 0xc) * 4),local_10,0xfe,3);
  if (cVar1 != '\x01') {
    ClearPvPRoom((CUser *)this);
  }
  return 1;
}
```
