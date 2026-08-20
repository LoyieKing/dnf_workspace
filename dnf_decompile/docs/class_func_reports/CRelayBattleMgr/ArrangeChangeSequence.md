# ArrangeChangeSequence

`_ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi`

`CRelayBattleMgr::ArrangeChangeSequence(std::vector<int, std::allocator<int> >&, int, int&)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de790  _ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi
#           CRelayBattleMgr::ArrangeChangeSequence(std::vector<int, std::allocator<int> >&, int, int&)
# range [0x085de790, 0x085de83d]
085de790 +0x00:  push   %ebp
085de791 +0x01:  mov    %esp,%ebp
085de793 +0x03:  push   %ebx
085de794 +0x04:  sub    $0x24,%esp
085de797 +0x07:  movl   $0x0,-0xc(%ebp)
085de79e +0x0e:  jmp    085de828 <+0x98>
085de7a3 +0x13:  mov    -0xc(%ebp),%edx
085de7a6 +0x16:  mov    0x8(%ebp),%ecx
085de7a9 +0x19:  mov    %edx,%eax
085de7ab +0x1b:  add    %eax,%eax
085de7ad +0x1d:  add    %edx,%eax
085de7af +0x1f:  shl    $0x2,%eax
085de7b2 +0x22:  movzbl 0x6(%eax,%ecx,1),%eax
085de7b7 +0x27:  movsbl %al,%eax
085de7ba +0x2a:  cmp    0x10(%ebp),%eax
085de7bd +0x2d:  jne    085de824 <+0x94>
085de7bf +0x2f:  mov    -0xc(%ebp),%edx
085de7c2 +0x32:  mov    0x8(%ebp),%ecx
085de7c5 +0x35:  mov    %edx,%eax
085de7c7 +0x37:  add    %eax,%eax
085de7c9 +0x39:  add    %edx,%eax
085de7cb +0x3b:  shl    $0x2,%eax
085de7ce +0x3e:  mov    (%eax,%ecx,1),%eax
085de7d1 +0x41:  cmp    $0x1,%eax
085de7d4 +0x44:  jne    085de824 <+0x94>
085de7d6 +0x46:  mov    -0xc(%ebp),%edx
085de7d9 +0x49:  mov    0x8(%ebp),%ecx
085de7dc +0x4c:  mov    %edx,%eax
085de7de +0x4e:  add    %eax,%eax
085de7e0 +0x50:  add    %edx,%eax
085de7e2 +0x52:  shl    $0x2,%eax
085de7e5 +0x55:  movzbl 0x7(%eax,%ecx,1),%eax
085de7ea +0x5a:  test   %al,%al
085de7ec +0x5c:  je     085de824 <+0x94>
085de7ee +0x5e:  mov    -0xc(%ebp),%ebx
085de7f1 +0x61:  mov    0x14(%ebp),%eax
085de7f4 +0x64:  mov    (%eax),%eax
085de7f6 +0x66:  mov    %eax,%edx
085de7f8 +0x68:  lea    0x1(%eax),%ecx
085de7fb +0x6b:  mov    0x14(%ebp),%eax
085de7fe +0x6e:  mov    %ecx,(%eax)
085de800 +0x70:  mov    %edx,0x4(%esp)
085de804 +0x74:  mov    0xc(%ebp),%eax
085de807 +0x77:  mov    %eax,(%esp)
085de80a +0x7a:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085de80f +0x7f:  mov    (%eax),%eax
085de811 +0x81:  mov    %eax,%ecx
085de813 +0x83:  mov    0x8(%ebp),%edx
085de816 +0x86:  mov    %ebx,%eax
085de818 +0x88:  add    %eax,%eax
085de81a +0x8a:  add    %ebx,%eax
085de81c +0x8c:  shl    $0x2,%eax
085de81f +0x8f:  mov    %cx,0x4(%eax,%edx,1)
085de824 +0x94:  addl   $0x1,-0xc(%ebp)
085de828 +0x98:  cmpl   $0x7,-0xc(%ebp)
085de82c +0x9c:  setle  %al
085de82f +0x9f:  test   %al,%al
085de831 +0xa1:  jne    085de7a3 <+0x13>
085de837 +0xa7:  add    $0x24,%esp
085de83a +0xaa:  pop    %ebx
085de83b +0xab:  pop    %ebp
085de83c +0xac:  ret
085de83d +0xad:  nop
```

## 反编译 C

```c
// CRelayBattleMgr::ArrangeChangeSequence @ 0x85de790

/* CRelayBattleMgr::ArrangeChangeSequence(std::vector<int, std::allocator<int> >&, int, int&) */

void __thiscall
CRelayBattleMgr::ArrangeChangeSequence
          (CRelayBattleMgr *this,vector *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if ((((char)this[local_10 * 0xc + 6] == param_2) && (*(int *)(this + local_10 * 0xc) == 1)) &&
       (this[local_10 * 0xc + 7] != (CRelayBattleMgr)0x0)) {
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
