# GetValidPartyMember

`_ZN6CParty19GetValidPartyMemberERSt6vectorIiSaIiEE`

`CParty::GetValidPartyMember(std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bd1dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bd1dc  _ZN6CParty19GetValidPartyMemberERSt6vectorIiSaIiEE
#           CParty::GetValidPartyMember(std::vector<int, std::allocator<int> >&)
# range [0x085bd1dc, 0x085bd235]
085bd1dc +0x00:  push   %ebp
085bd1dd +0x01:  mov    %esp,%ebp
085bd1df +0x03:  sub    $0x28,%esp
085bd1e2 +0x06:  mov    0xc(%ebp),%eax
085bd1e5 +0x09:  mov    %eax,(%esp)
085bd1e8 +0x0c:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
085bd1ed +0x11:  movl   $0x0,-0xc(%ebp)
085bd1f4 +0x18:  jmp    085bd227 <+0x4b>
085bd1f6 +0x1a:  mov    -0xc(%ebp),%eax
085bd1f9 +0x1d:  mov    %eax,0x4(%esp)
085bd1fd +0x21:  mov    0x8(%ebp),%eax
085bd200 +0x24:  mov    %eax,(%esp)
085bd203 +0x27:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bd208 +0x2c:  test   %al,%al
085bd20a +0x2e:  je     085bd21e <+0x42>
085bd20c +0x30:  lea    -0xc(%ebp),%eax
085bd20f +0x33:  mov    %eax,0x4(%esp)
085bd213 +0x37:  mov    0xc(%ebp),%eax
085bd216 +0x3a:  mov    %eax,(%esp)
085bd219 +0x3d:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085bd21e +0x42:  mov    -0xc(%ebp),%eax
085bd221 +0x45:  add    $0x1,%eax
085bd224 +0x48:  mov    %eax,-0xc(%ebp)
085bd227 +0x4b:  mov    -0xc(%ebp),%eax
085bd22a +0x4e:  cmp    $0x3,%eax
085bd22d +0x51:  setle  %al
085bd230 +0x54:  test   %al,%al
085bd232 +0x56:  jne    085bd1f6 <+0x1a>
085bd234 +0x58:  leave
085bd235 +0x59:  ret
```

## 反编译 C

```c
// CParty::GetValidPartyMember @ 0x85bd1dc

/* CParty::GetValidPartyMember(std::vector<int, std::allocator<int> >&) */

void __thiscall CParty::GetValidPartyMember(CParty *this,vector *param_1)

{
  char cVar1;
  int local_10 [3];
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_1);
  for (local_10[0] = 0; local_10[0] < 4; local_10[0] = local_10[0] + 1) {
    cVar1 = checkValidUser(this,local_10[0]);
    if (cVar1 != '\0') {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_1,local_10);
    }
  }
  return;
}
```
