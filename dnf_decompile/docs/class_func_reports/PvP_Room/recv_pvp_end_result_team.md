# recv_pvp_end_result_team

`_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser`

`PvP_Room::recv_pvp_end_result_team(CUser*) const`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc0f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc0f0  _ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser
#           PvP_Room::recv_pvp_end_result_team(CUser*) const
# range [0x085dc0f0, 0x085dc1c7]
085dc0f0 +0x00:  push   %ebp
085dc0f1 +0x01:  mov    %esp,%ebp
085dc0f3 +0x03:  sub    $0x18,%esp
085dc0f6 +0x06:  movl   $0x0,-0x8(%ebp)
085dc0fd +0x0d:  movl   $0xff,-0x4(%ebp)
085dc104 +0x14:  movl   $0x0,-0x8(%ebp)
085dc10b +0x1b:  jmp    085dc143 <+0x53>
085dc10d +0x1d:  mov    -0x8(%ebp),%edx
085dc110 +0x20:  mov    0x8(%ebp),%eax
085dc113 +0x23:  add    $0xc,%edx
085dc116 +0x26:  mov    (%eax,%edx,4),%eax
085dc119 +0x29:  test   %eax,%eax
085dc11b +0x2b:  je     085dc13f <+0x4f>
085dc11d +0x2d:  mov    -0x8(%ebp),%edx
085dc120 +0x30:  mov    0x8(%ebp),%eax
085dc123 +0x33:  add    $0xc,%edx
085dc126 +0x36:  mov    (%eax,%edx,4),%eax
085dc129 +0x39:  cmp    0xc(%ebp),%eax
085dc12c +0x3c:  jne    085dc13f <+0x4f>
085dc12e +0x3e:  mov    -0x8(%ebp),%edx
085dc131 +0x41:  mov    0x8(%ebp),%eax
085dc134 +0x44:  add    $0x14,%edx
085dc137 +0x47:  mov    (%eax,%edx,4),%eax
085dc13a +0x4a:  mov    %eax,-0x4(%ebp)
085dc13d +0x4d:  jmp    085dc14e <+0x5e>
085dc13f +0x4f:  addl   $0x1,-0x8(%ebp)
085dc143 +0x53:  cmpl   $0x7,-0x8(%ebp)
085dc147 +0x57:  setle  %al
085dc14a +0x5a:  test   %al,%al
085dc14c +0x5c:  jne    085dc10d <+0x1d>
085dc14e +0x5e:  cmpl   $0xff,-0x4(%ebp)
085dc155 +0x65:  jne    085dc15e <+0x6e>
085dc157 +0x67:  mov    $0x0,%eax
085dc15c +0x6c:  jmp    085dc1c6 <+0xd6>
085dc15e +0x6e:  movl   $0x0,-0x8(%ebp)
085dc165 +0x75:  jmp    085dc1b6 <+0xc6>
085dc167 +0x77:  mov    -0x8(%ebp),%edx
085dc16a +0x7a:  mov    0x8(%ebp),%eax
085dc16d +0x7d:  add    $0xc,%edx
085dc170 +0x80:  mov    (%eax,%edx,4),%eax
085dc173 +0x83:  test   %eax,%eax
085dc175 +0x85:  je     085dc1ae <+0xbe>
085dc177 +0x87:  mov    -0x8(%ebp),%edx
085dc17a +0x8a:  mov    0x8(%ebp),%eax
085dc17d +0x8d:  add    $0x14,%edx
085dc180 +0x90:  mov    (%eax,%edx,4),%eax
085dc183 +0x93:  cmp    -0x4(%ebp),%eax
085dc186 +0x96:  jne    085dc1b1 <+0xc1>
085dc188 +0x98:  mov    0x8(%ebp),%eax
085dc18b +0x9b:  lea    0x5bc(%eax),%edx
085dc191 +0xa1:  mov    -0x8(%ebp),%eax
085dc194 +0xa4:  mov    %eax,0x4(%esp)
085dc198 +0xa8:  mov    %edx,(%esp)
085dc19b +0xab:  call   085d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>  ; PvpResultRecvFlag::IsRecv(int) const
085dc1a0 +0xb0:  xor    $0x1,%eax
085dc1a3 +0xb3:  test   %al,%al
085dc1a5 +0xb5:  je     085dc1b2 <+0xc2>
085dc1a7 +0xb7:  mov    $0x0,%eax
085dc1ac +0xbc:  jmp    085dc1c6 <+0xd6>
085dc1ae +0xbe:  nop
085dc1af +0xbf:  jmp    085dc1b2 <+0xc2>
085dc1b1 +0xc1:  nop
085dc1b2 +0xc2:  addl   $0x1,-0x8(%ebp)
085dc1b6 +0xc6:  cmpl   $0x7,-0x8(%ebp)
085dc1ba +0xca:  setle  %al
085dc1bd +0xcd:  test   %al,%al
085dc1bf +0xcf:  jne    085dc167 <+0x77>
085dc1c1 +0xd1:  mov    $0x1,%eax
085dc1c6 +0xd6:  leave
085dc1c7 +0xd7:  ret
```

## 反编译 C

```c
// PvP_Room::recv_pvp_end_result_team @ 0x85dc0f0

/* PvP_Room::recv_pvp_end_result_team(CUser*) const */

undefined4 __thiscall PvP_Room::recv_pvp_end_result_team(PvP_Room *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  local_8 = 0xff;
  local_c = 0;
  do {
    if (7 < local_c) {
LAB_085dc14e:
      if (local_8 == 0xff) {
        uVar2 = 0;
      }
      else {
        for (local_c = 0; local_c < 8; local_c = local_c + 1) {
          if (((*(int *)(this + (local_c + 0xc) * 4) != 0) &&
              (*(int *)(this + (local_c + 0x14) * 4) == local_8)) &&
             (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5bc),local_c),
             cVar1 != '\x01')) {
            return 0;
          }
        }
        uVar2 = 1;
      }
      return uVar2;
    }
    if ((*(int *)(this + (local_c + 0xc) * 4) != 0) &&
       (*(CUser **)(this + (local_c + 0xc) * 4) == param_1)) {
      local_8 = *(int *)(this + (local_c + 0x14) * 4);
      goto LAB_085dc14e;
    }
    local_c = local_c + 1;
  } while( true );
}
```
