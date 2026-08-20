# dieMob

`_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE`

`advancealtar::ProcStage::dieMob(unsigned short, unsigned short, MSG_MONSTER_DIE const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812e1de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812e1de  _ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE
#           advancealtar::ProcStage::dieMob(unsigned short, unsigned short, MSG_MONSTER_DIE const&)
# range [0x0812e1de, 0x0812e2c5]
0812e1de +0x00:  push   %ebp
0812e1df +0x01:  mov    %esp,%ebp
0812e1e1 +0x03:  push   %ebx
0812e1e2 +0x04:  sub    $0x34,%esp
0812e1e5 +0x07:  mov    0xc(%ebp),%edx
0812e1e8 +0x0a:  mov    0x10(%ebp),%eax
0812e1eb +0x0d:  mov    %dx,-0x1c(%ebp)
0812e1ef +0x11:  mov    %ax,-0x20(%ebp)
0812e1f3 +0x15:  movzwl -0x20(%ebp),%edx
0812e1f7 +0x19:  movzwl -0x1c(%ebp),%eax
0812e1fb +0x1d:  mov    0x8(%ebp),%ecx
0812e1fe +0x20:  lea    0x18(%ecx),%ebx
0812e201 +0x23:  mov    0x14(%ebp),%ecx
0812e204 +0x26:  mov    %ecx,0xc(%esp)
0812e208 +0x2a:  mov    %edx,0x8(%esp)
0812e20c +0x2e:  mov    %eax,0x4(%esp)
0812e210 +0x32:  mov    %ebx,(%esp)
0812e213 +0x35:  call   0812db00 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE>  ; advancealtar::ProcStage::ProcSummonObjectMs::dieMob(unsigned short, unsigned short, MSG_MONSTER_DIE const&)
0812e218 +0x3a:  xor    $0x1,%eax
0812e21b +0x3d:  test   %al,%al
0812e21d +0x3f:  je     0812e2bb <+0xdd>
0812e223 +0x45:  movzwl -0x1c(%ebp),%eax
0812e227 +0x49:  mov    %ax,-0xe(%ebp)
0812e22b +0x4d:  mov    0x8(%ebp),%eax
0812e22e +0x50:  lea    0x50(%eax),%ecx
0812e231 +0x53:  lea    -0x14(%ebp),%eax
0812e234 +0x56:  lea    -0xe(%ebp),%edx
0812e237 +0x59:  mov    %edx,0x8(%esp)
0812e23b +0x5d:  mov    %ecx,0x4(%esp)
0812e23f +0x61:  mov    %eax,(%esp)
0812e242 +0x64:  call   0813558c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1193>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1193
0812e247 +0x69:  sub    $0x4,%esp
0812e24a +0x6c:  mov    0x8(%ebp),%eax
0812e24d +0x6f:  lea    0x50(%eax),%edx
0812e250 +0x72:  lea    -0xc(%ebp),%eax
0812e253 +0x75:  mov    %edx,0x4(%esp)
0812e257 +0x79:  mov    %eax,(%esp)
0812e25a +0x7c:  call   081355b8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x11bf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x11bf
0812e25f +0x81:  sub    $0x4,%esp
0812e262 +0x84:  lea    -0xc(%ebp),%eax
0812e265 +0x87:  mov    %eax,0x4(%esp)
0812e269 +0x8b:  lea    -0x14(%ebp),%eax
0812e26c +0x8e:  mov    %eax,(%esp)
0812e26f +0x91:  call   081355de <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x11e5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x11e5
0812e274 +0x96:  test   %al,%al
0812e276 +0x98:  je     0812e295 <+0xb7>
0812e278 +0x9a:  lea    -0x14(%ebp),%eax
0812e27b +0x9d:  mov    %eax,(%esp)
0812e27e +0xa0:  call   081355f2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x11f9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x11f9
0812e283 +0xa5:  movzbl 0xe(%eax),%eax
0812e287 +0xa9:  xor    $0x1,%eax
0812e28a +0xac:  test   %al,%al
0812e28c +0xae:  je     0812e295 <+0xb7>
0812e28e +0xb0:  mov    $0x1,%eax
0812e293 +0xb5:  jmp    0812e29a <+0xbc>
0812e295 +0xb7:  mov    $0x0,%eax
0812e29a +0xbc:  test   %al,%al
0812e29c +0xbe:  je     0812e2b4 <+0xd6>
0812e29e +0xc0:  lea    -0x14(%ebp),%eax
0812e2a1 +0xc3:  mov    %eax,(%esp)
0812e2a4 +0xc6:  call   081355f2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x11f9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x11f9
0812e2a9 +0xcb:  movb   $0x1,0xe(%eax)
0812e2ad +0xcf:  mov    $0x1,%eax
0812e2b2 +0xd4:  jmp    0812e2c0 <+0xe2>
0812e2b4 +0xd6:  mov    $0x0,%eax
0812e2b9 +0xdb:  jmp    0812e2c0 <+0xe2>
0812e2bb +0xdd:  mov    $0x1,%eax
0812e2c0 +0xe2:  mov    -0x4(%ebp),%ebx
0812e2c3 +0xe5:  leave
0812e2c4 +0xe6:  ret
0812e2c5 +0xe7:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::dieMob @ 0x812e1de

/* advancealtar::ProcStage::dieMob(unsigned short, unsigned short, MSG_MONSTER_DIE const&) */

bool __thiscall
advancealtar::ProcStage::dieMob
          (ProcStage *this,ushort param_1,ushort param_2,MSG_MONSTER_DIE *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>> local_18 [6];
  ushort local_12;
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  local_10 [8];
  
  cVar2 = ProcSummonObjectMs::dieMob((ProcSummonObjectMs *)(this + 0x18),param_1,param_2,param_3);
  if (cVar2 == '\x01') {
    return true;
  }
  local_12 = param_1;
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::find((short *)local_18);
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
          operator!=(local_18,(_Rb_tree_iterator *)local_10);
  if ((cVar2 == '\0') ||
     (iVar3 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
              operator->(local_18), *(char *)(iVar3 + 0xe) == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
            operator->(local_18);
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  return bVar1;
}
```
