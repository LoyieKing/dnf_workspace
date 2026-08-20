# GetNextPlayer

`_ZN15CRelayBattleMgr13GetNextPlayerEi`

`CRelayBattleMgr::GetNextPlayer(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085dea14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dea14  _ZN15CRelayBattleMgr13GetNextPlayerEi
#           CRelayBattleMgr::GetNextPlayer(int)
# range [0x085dea14, 0x085dead5]
085dea14 +0x00:  push   %ebp
085dea15 +0x01:  mov    %esp,%ebp
085dea17 +0x03:  sub    $0x10,%esp
085dea1a +0x06:  movl   $0xffffffff,-0xc(%ebp)
085dea21 +0x0d:  movl   $0x0,-0x8(%ebp)
085dea28 +0x14:  movl   $0x0,-0x4(%ebp)
085dea2f +0x1b:  jmp    085deaac <+0x98>
085dea31 +0x1d:  mov    -0x4(%ebp),%edx
085dea34 +0x20:  mov    0x8(%ebp),%ecx
085dea37 +0x23:  mov    %edx,%eax
085dea39 +0x25:  add    %eax,%eax
085dea3b +0x27:  add    %edx,%eax
085dea3d +0x29:  shl    $0x2,%eax
085dea40 +0x2c:  movzbl 0x6(%eax,%ecx,1),%eax
085dea45 +0x31:  movsbl %al,%eax
085dea48 +0x34:  cmp    0xc(%ebp),%eax
085dea4b +0x37:  jne    085deaa8 <+0x94>
085dea4d +0x39:  mov    -0x4(%ebp),%edx
085dea50 +0x3c:  mov    0x8(%ebp),%ecx
085dea53 +0x3f:  mov    %edx,%eax
085dea55 +0x41:  add    %eax,%eax
085dea57 +0x43:  add    %edx,%eax
085dea59 +0x45:  shl    $0x2,%eax
085dea5c +0x48:  mov    (%eax,%ecx,1),%eax
085dea5f +0x4b:  cmp    $0x1,%eax
085dea62 +0x4e:  je     085dea70 <+0x5c>
085dea64 +0x50:  cmp    $0x2,%eax
085dea67 +0x53:  jne    085deaa8 <+0x94>
085dea69 +0x55:  mov    $0xffffffff,%eax
085dea6e +0x5a:  jmp    085dead4 <+0xc0>
085dea70 +0x5c:  mov    -0x4(%ebp),%edx
085dea73 +0x5f:  mov    0x8(%ebp),%ecx
085dea76 +0x62:  mov    %edx,%eax
085dea78 +0x64:  add    %eax,%eax
085dea7a +0x66:  add    %edx,%eax
085dea7c +0x68:  shl    $0x2,%eax
085dea7f +0x6b:  movzwl 0x4(%eax,%ecx,1),%eax
085dea84 +0x70:  cwtl
085dea85 +0x71:  cmp    -0x8(%ebp),%eax
085dea88 +0x74:  jle    085deaa8 <+0x94>
085dea8a +0x76:  mov    -0x4(%ebp),%edx
085dea8d +0x79:  mov    0x8(%ebp),%ecx
085dea90 +0x7c:  mov    %edx,%eax
085dea92 +0x7e:  add    %eax,%eax
085dea94 +0x80:  add    %edx,%eax
085dea96 +0x82:  shl    $0x2,%eax
085dea99 +0x85:  movzwl 0x4(%eax,%ecx,1),%eax
085dea9e +0x8a:  cwtl
085dea9f +0x8b:  mov    %eax,-0x8(%ebp)
085deaa2 +0x8e:  mov    -0x4(%ebp),%eax
085deaa5 +0x91:  mov    %eax,-0xc(%ebp)
085deaa8 +0x94:  addl   $0x1,-0x4(%ebp)
085deaac +0x98:  cmpl   $0x7,-0x4(%ebp)
085deab0 +0x9c:  setle  %al
085deab3 +0x9f:  test   %al,%al
085deab5 +0xa1:  jne    085dea31 <+0x1d>
085deabb +0xa7:  mov    -0xc(%ebp),%edx
085deabe +0xaa:  mov    0x8(%ebp),%ecx
085deac1 +0xad:  mov    %edx,%eax
085deac3 +0xaf:  add    %eax,%eax
085deac5 +0xb1:  add    %edx,%eax
085deac7 +0xb3:  shl    $0x2,%eax
085deaca +0xb6:  movl   $0x2,(%eax,%ecx,1)
085dead1 +0xbd:  mov    -0xc(%ebp),%eax
085dead4 +0xc0:  leave
085dead5 +0xc1:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::GetNextPlayer @ 0x85dea14

/* CRelayBattleMgr::GetNextPlayer(int) */

int __thiscall CRelayBattleMgr::GetNextPlayer(CRelayBattleMgr *this,int param_1)

{
  short sVar1;
  int local_10;
  int local_8;
  
  local_10 = -1;
  sVar1 = 0;
  local_8 = 0;
  do {
    if (7 < local_8) {
      *(undefined4 *)(this + local_10 * 0xc) = 2;
      return local_10;
    }
    if ((char)this[local_8 * 0xc + 6] == param_1) {
      if (*(int *)(this + local_8 * 0xc) == 1) {
        if (sVar1 < *(short *)(this + local_8 * 0xc + 4)) {
          sVar1 = *(short *)(this + local_8 * 0xc + 4);
          local_10 = local_8;
        }
      }
      else if (*(int *)(this + local_8 * 0xc) == 2) {
        return -1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}
```
