# ArrangeNoChangeSequence

`_ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi`

`CRelayBattleMgr::ArrangeNoChangeSequence(std::vector<int, std::allocator<int> >&, int, int&)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de83e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de83e  _ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi
#           CRelayBattleMgr::ArrangeNoChangeSequence(std::vector<int, std::allocator<int> >&, int, int&)
# range [0x085de83e, 0x085de8ed]
085de83e +0x00:  push   %ebp
085de83f +0x01:  mov    %esp,%ebp
085de841 +0x03:  push   %ebx
085de842 +0x04:  sub    $0x24,%esp
085de845 +0x07:  movl   $0x0,-0xc(%ebp)
085de84c +0x0e:  jmp    085de8d9 <+0x9b>
085de851 +0x13:  mov    -0xc(%ebp),%edx
085de854 +0x16:  mov    0x8(%ebp),%ecx
085de857 +0x19:  mov    %edx,%eax
085de859 +0x1b:  add    %eax,%eax
085de85b +0x1d:  add    %edx,%eax
085de85d +0x1f:  shl    $0x2,%eax
085de860 +0x22:  movzbl 0x6(%eax,%ecx,1),%eax
085de865 +0x27:  movsbl %al,%eax
085de868 +0x2a:  cmp    0x10(%ebp),%eax
085de86b +0x2d:  jne    085de8d5 <+0x97>
085de86d +0x2f:  mov    -0xc(%ebp),%edx
085de870 +0x32:  mov    0x8(%ebp),%ecx
085de873 +0x35:  mov    %edx,%eax
085de875 +0x37:  add    %eax,%eax
085de877 +0x39:  add    %edx,%eax
085de879 +0x3b:  shl    $0x2,%eax
085de87c +0x3e:  mov    (%eax,%ecx,1),%eax
085de87f +0x41:  cmp    $0x1,%eax
085de882 +0x44:  jne    085de8d5 <+0x97>
085de884 +0x46:  mov    -0xc(%ebp),%edx
085de887 +0x49:  mov    0x8(%ebp),%ecx
085de88a +0x4c:  mov    %edx,%eax
085de88c +0x4e:  add    %eax,%eax
085de88e +0x50:  add    %edx,%eax
085de890 +0x52:  shl    $0x2,%eax
085de893 +0x55:  movzbl 0x7(%eax,%ecx,1),%eax
085de898 +0x5a:  xor    $0x1,%eax
085de89b +0x5d:  test   %al,%al
085de89d +0x5f:  je     085de8d5 <+0x97>
085de89f +0x61:  mov    -0xc(%ebp),%ebx
085de8a2 +0x64:  mov    0x14(%ebp),%eax
085de8a5 +0x67:  mov    (%eax),%eax
085de8a7 +0x69:  mov    %eax,%edx
085de8a9 +0x6b:  lea    0x1(%eax),%ecx
085de8ac +0x6e:  mov    0x14(%ebp),%eax
085de8af +0x71:  mov    %ecx,(%eax)
085de8b1 +0x73:  mov    %edx,0x4(%esp)
085de8b5 +0x77:  mov    0xc(%ebp),%eax
085de8b8 +0x7a:  mov    %eax,(%esp)
085de8bb +0x7d:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085de8c0 +0x82:  mov    (%eax),%eax
085de8c2 +0x84:  mov    %eax,%ecx
085de8c4 +0x86:  mov    0x8(%ebp),%edx
085de8c7 +0x89:  mov    %ebx,%eax
085de8c9 +0x8b:  add    %eax,%eax
085de8cb +0x8d:  add    %ebx,%eax
085de8cd +0x8f:  shl    $0x2,%eax
085de8d0 +0x92:  mov    %cx,0x4(%eax,%edx,1)
085de8d5 +0x97:  addl   $0x1,-0xc(%ebp)
085de8d9 +0x9b:  cmpl   $0x7,-0xc(%ebp)
085de8dd +0x9f:  setle  %al
085de8e0 +0xa2:  test   %al,%al
085de8e2 +0xa4:  jne    085de851 <+0x13>
085de8e8 +0xaa:  add    $0x24,%esp
085de8eb +0xad:  pop    %ebx
085de8ec +0xae:  pop    %ebp
085de8ed +0xaf:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::ArrangeNoChangeSequence @ 0x85de83e

/* CRelayBattleMgr::ArrangeNoChangeSequence(std::vector<int, std::allocator<int> >&, int, int&) */

void __thiscall
CRelayBattleMgr::ArrangeNoChangeSequence
          (CRelayBattleMgr *this,vector *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if ((((char)this[local_10 * 0xc + 6] == param_2) && (*(int *)(this + local_10 * 0xc) == 1)) &&
       (this[local_10 * 0xc + 7] != (CRelayBattleMgr)0x1)) {
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      puVar2 = (undefined4 *)
               std::vector<int,std::allocator<int>>::operator[]
                         ((vector<int,std::allocator<int>> *)param_1,uVar1);
      *(short *)(this + local_10 * 0xc + 4) = (short)*puVar2;
    }
  }
  return;
}
```
