# SetGrowthCreatureEventInfo

`_ZN5CUser26SetGrowthCreatureEventInfoERK30SIG_GIVE_GROWTH_CREATURE_EVENT`

`CUser::SetGrowthCreatureEventInfo(SIG_GIVE_GROWTH_CREATURE_EVENT const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691cde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691cde  _ZN5CUser26SetGrowthCreatureEventInfoERK30SIG_GIVE_GROWTH_CREATURE_EVENT
#           CUser::SetGrowthCreatureEventInfo(SIG_GIVE_GROWTH_CREATURE_EVENT const&)
# range [0x08691cde, 0x08691dbb]
08691cde +0x00:  push   %ebp
08691cdf +0x01:  mov    %esp,%ebp
08691ce1 +0x03:  sub    $0x48,%esp
08691ce4 +0x06:  movl   $0x0,-0xc(%ebp)
08691ceb +0x0d:  jmp    08691da5 <+0xc7>
08691cf0 +0x12:  mov    -0xc(%ebp),%edx
08691cf3 +0x15:  mov    0xc(%ebp),%eax
08691cf6 +0x18:  imul   $0x2c,%edx,%edx
08691cf9 +0x1b:  movzwl (%edx,%eax,1),%eax
08691cfd +0x1f:  test   %ax,%ax
08691d00 +0x22:  je     08691db6 <+0xd8>
08691d06 +0x28:  mov    -0xc(%ebp),%eax
08691d09 +0x2b:  mov    0xc(%ebp),%edx
08691d0c +0x2e:  imul   $0x2c,%eax,%eax
08691d0f +0x31:  lea    (%edx,%eax,1),%eax
08691d12 +0x34:  add    $0x4,%eax
08691d15 +0x37:  mov    (%eax),%eax
08691d17 +0x39:  test   %eax,%eax
08691d19 +0x3b:  je     08691db9 <+0xdb>
08691d1f +0x41:  lea    -0x38(%ebp),%eax
08691d22 +0x44:  mov    %eax,(%esp)
08691d25 +0x47:  call   081b7458 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0xd7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0xd7
08691d2a +0x4c:  mov    -0xc(%ebp),%edx
08691d2d +0x4f:  mov    0xc(%ebp),%eax
08691d30 +0x52:  imul   $0x2c,%edx,%edx
08691d33 +0x55:  movzwl (%edx,%eax,1),%eax
08691d37 +0x59:  mov    %ax,-0x38(%ebp)
08691d3b +0x5d:  mov    -0xc(%ebp),%eax
08691d3e +0x60:  mov    0xc(%ebp),%edx
08691d41 +0x63:  imul   $0x2c,%eax,%eax
08691d44 +0x66:  lea    (%edx,%eax,1),%eax
08691d47 +0x69:  add    $0x4,%eax
08691d4a +0x6c:  mov    (%eax),%eax
08691d4c +0x6e:  mov    %eax,-0x34(%ebp)
08691d4f +0x71:  mov    -0xc(%ebp),%eax
08691d52 +0x74:  mov    0xc(%ebp),%edx
08691d55 +0x77:  imul   $0x2c,%eax,%eax
08691d58 +0x7a:  lea    (%edx,%eax,1),%eax
08691d5b +0x7d:  add    $0x8,%eax
08691d5e +0x80:  mov    (%eax),%eax
08691d60 +0x82:  mov    %eax,-0x30(%ebp)
08691d63 +0x85:  mov    -0xc(%ebp),%eax
08691d66 +0x88:  imul   $0x2c,%eax,%eax
08691d69 +0x8b:  add    0xc(%ebp),%eax
08691d6c +0x8e:  add    $0xc,%eax
08691d6f +0x91:  movl   $0x1e,0x8(%esp)
08691d77 +0x99:  mov    %eax,0x4(%esp)
08691d7b +0x9d:  lea    -0x38(%ebp),%eax
08691d7e +0xa0:  add    $0xc,%eax
08691d81 +0xa3:  mov    %eax,(%esp)
08691d84 +0xa6:  call   0807d8a0 <_init+0x198>
08691d89 +0xab:  mov    0x8(%ebp),%eax
08691d8c +0xae:  lea    0x8ebf8(%eax),%edx
08691d92 +0xb4:  lea    -0x38(%ebp),%eax
08691d95 +0xb7:  mov    %eax,0x4(%esp)
08691d99 +0xbb:  mov    %edx,(%esp)
08691d9c +0xbe:  call   081b7660 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x2df>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x2df
08691da1 +0xc3:  addl   $0x1,-0xc(%ebp)
08691da5 +0xc7:  cmpl   $0xa,-0xc(%ebp)
08691da9 +0xcb:  setle  %al
08691dac +0xce:  test   %al,%al
08691dae +0xd0:  jne    08691cf0 <+0x12>
08691db4 +0xd6:  jmp    08691dba <+0xdc>
08691db6 +0xd8:  nop
08691db7 +0xd9:  jmp    08691dba <+0xdc>
08691db9 +0xdb:  nop
08691dba +0xdc:  leave
08691dbb +0xdd:  ret
```

## 反编译 C

```c
// CUser::SetGrowthCreatureEventInfo @ 0x8691cde

/* CUser::SetGrowthCreatureEventInfo(SIG_GIVE_GROWTH_CREATURE_EVENT const&) */

void __thiscall
CUser::SetGrowthCreatureEventInfo(CUser *this,SIG_GIVE_GROWTH_CREATURE_EVENT *param_1)

{
  undefined2 local_3c [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [32];
  int local_10;
  
  local_10 = 0;
  while (((local_10 < 0xb && (*(short *)(param_1 + local_10 * 0x2c) != 0)) &&
         (*(int *)(param_1 + local_10 * 0x2c + 4) != 0))) {
    GrowthCreatureEvent::eventCharacInfo::eventCharacInfo((eventCharacInfo *)local_3c);
    local_3c[0] = *(undefined2 *)(param_1 + local_10 * 0x2c);
    local_38 = *(undefined4 *)(param_1 + local_10 * 0x2c + 4);
    local_34 = *(undefined4 *)(param_1 + local_10 * 0x2c + 8);
    memcpy(auStack_30,param_1 + local_10 * 0x2c + 0xc,0x1e);
    std::
    vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
    ::push_back((vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
                 *)(this + 0x8ebf8),(eventCharacInfo *)local_3c);
    local_10 = local_10 + 1;
  }
  return;
}
```
