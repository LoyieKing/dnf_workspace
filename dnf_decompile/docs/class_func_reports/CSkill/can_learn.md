# can_learn

`_ZNK6CSkill9can_learnEiiii`

`CSkill::can_learn(int, int, int, int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x0835039e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835039e  _ZNK6CSkill9can_learnEiiii
#           CSkill::can_learn(int, int, int, int) const
# range [0x0835039e, 0x083504eb]
0835039e +0x000:  push   %ebp
0835039f +0x001:  mov    %esp,%ebp
083503a1 +0x003:  push   %ebx
083503a2 +0x004:  sub    $0x24,%esp
083503a5 +0x007:  cmpl   $0x0,0x14(%ebp)
083503a9 +0x00b:  jg     0835043f <+0xa1>
083503af +0x011:  cmpl   $0x0,0x18(%ebp)
083503b3 +0x015:  jle    083503cc <+0x2e>
083503b5 +0x017:  mov    0x10(%ebp),%eax
083503b8 +0x01a:  mov    %eax,0x4(%esp)
083503bc +0x01e:  mov    0x8(%ebp),%eax
083503bf +0x021:  mov    %eax,(%esp)
083503c2 +0x024:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
083503c7 +0x029:  cmp    0x18(%ebp),%eax
083503ca +0x02c:  jge    083503d3 <+0x35>
083503cc +0x02e:  mov    $0x1,%eax
083503d1 +0x033:  jmp    083503d8 <+0x3a>
083503d3 +0x035:  mov    $0x0,%eax
083503d8 +0x03a:  test   %al,%al
083503da +0x03c:  je     083503e6 <+0x48>
083503dc +0x03e:  mov    $0x0,%eax
083503e1 +0x043:  jmp    083504e5 <+0x147>
083503e6 +0x048:  mov    0x10(%ebp),%eax
083503e9 +0x04b:  mov    %eax,0x4(%esp)
083503ed +0x04f:  mov    0x8(%ebp),%eax
083503f0 +0x052:  mov    %eax,(%esp)
083503f3 +0x055:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
083503f8 +0x05a:  mov    0x8(%ebp),%edx
083503fb +0x05d:  mov    0xc4(%edx),%edx
08350401 +0x063:  mov    0xc(%ebp),%ecx
08350404 +0x066:  mov    %ecx,%ebx
08350406 +0x068:  sub    %edx,%ebx
08350408 +0x06a:  mov    %ebx,%edx
0835040a +0x06c:  add    $0x1,%edx
0835040d +0x06f:  cmp    %edx,%eax
0835040f +0x071:  jge    08350425 <+0x87>
08350411 +0x073:  mov    0x10(%ebp),%eax
08350414 +0x076:  mov    %eax,0x4(%esp)
08350418 +0x07a:  mov    0x8(%ebp),%eax
0835041b +0x07d:  mov    %eax,(%esp)
0835041e +0x080:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
08350423 +0x085:  jmp    0835043a <+0x9c>
08350425 +0x087:  mov    0x8(%ebp),%eax
08350428 +0x08a:  mov    0xc4(%eax),%eax
0835042e +0x090:  mov    0xc(%ebp),%edx
08350431 +0x093:  mov    %edx,%ecx
08350433 +0x095:  sub    %eax,%ecx
08350435 +0x097:  mov    %ecx,%eax
08350437 +0x099:  add    $0x1,%eax
0835043a +0x09c:  mov    %eax,-0x14(%ebp)
0835043d +0x09f:  jmp    083504ac <+0x10e>
0835043f +0x0a1:  mov    0x14(%ebp),%eax
08350442 +0x0a4:  mov    %eax,0x8(%esp)
08350446 +0x0a8:  mov    0x10(%ebp),%eax
08350449 +0x0ab:  mov    %eax,0x4(%esp)
0835044d +0x0af:  mov    0x8(%ebp),%eax
08350450 +0x0b2:  mov    %eax,(%esp)
08350453 +0x0b5:  call   08350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>  ; CSkill::get_second_growtype_max_level(int, int) const
08350458 +0x0ba:  mov    %eax,-0xc(%ebp)
0835045b +0x0bd:  cmpl   $0x0,-0xc(%ebp)
0835045f +0x0c1:  jne    08350476 <+0xd8>
08350461 +0x0c3:  mov    0x10(%ebp),%eax
08350464 +0x0c6:  mov    %eax,0x4(%esp)
08350468 +0x0ca:  mov    0x8(%ebp),%eax
0835046b +0x0cd:  mov    %eax,(%esp)
0835046e +0x0d0:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
08350473 +0x0d5:  mov    %eax,-0xc(%ebp)
08350476 +0x0d8:  cmpl   $0x0,0x18(%ebp)
0835047a +0x0dc:  jle    08350484 <+0xe6>
0835047c +0x0de:  mov    -0xc(%ebp),%eax
0835047f +0x0e1:  cmp    0x18(%ebp),%eax
08350482 +0x0e4:  jge    0835048b <+0xed>
08350484 +0x0e6:  mov    $0x0,%eax
08350489 +0x0eb:  jmp    083504e5 <+0x147>
0835048b +0x0ed:  mov    0x8(%ebp),%eax
0835048e +0x0f0:  mov    0xc4(%eax),%eax
08350494 +0x0f6:  mov    0xc(%ebp),%edx
08350497 +0x0f9:  mov    %edx,%ebx
08350499 +0x0fb:  sub    %eax,%ebx
0835049b +0x0fd:  mov    %ebx,%eax
0835049d +0x0ff:  add    $0x1,%eax
083504a0 +0x102:  mov    -0xc(%ebp),%edx
083504a3 +0x105:  cmp    %edx,%eax
083504a5 +0x107:  jle    083504a9 <+0x10b>
083504a7 +0x109:  mov    %edx,%eax
083504a9 +0x10b:  mov    %eax,-0x14(%ebp)
083504ac +0x10e:  mov    -0x14(%ebp),%eax
083504af +0x111:  cmp    0x18(%ebp),%eax
083504b2 +0x114:  jge    083504bb <+0x11d>
083504b4 +0x116:  mov    $0x0,%eax
083504b9 +0x11b:  jmp    083504e5 <+0x147>
083504bb +0x11d:  mov    0x8(%ebp),%eax
083504be +0x120:  mov    0xc4(%eax),%edx
083504c4 +0x126:  mov    0x8(%ebp),%eax
083504c7 +0x129:  mov    0xc8(%eax),%eax
083504cd +0x12f:  mov    0x18(%ebp),%ecx
083504d0 +0x132:  sub    $0x1,%ecx
083504d3 +0x135:  imul   %ecx,%eax
083504d6 +0x138:  lea    (%edx,%eax,1),%eax
083504d9 +0x13b:  mov    %eax,-0x10(%ebp)
083504dc +0x13e:  mov    -0x10(%ebp),%eax
083504df +0x141:  cmp    0xc(%ebp),%eax
083504e2 +0x144:  setle  %al
083504e5 +0x147:  add    $0x24,%esp
083504e8 +0x14a:  pop    %ebx
083504e9 +0x14b:  pop    %ebp
083504ea +0x14c:  ret
083504eb +0x14d:  nop
```

## 反编译 C

```c
// CSkill::can_learn @ 0x835039e

/* CSkill::can_learn(int, int, int, int) const */

undefined4 __thiscall
CSkill::can_learn(CSkill *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_10;
  
  if (param_3 < 1) {
    if ((param_4 < 1) || (iVar2 = get_type_max_level(this,param_2), iVar2 < param_4)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
    iVar2 = get_type_max_level(this,param_2);
    if (iVar2 < (param_1 - *(int *)(this + 0xc4)) + 1) {
      local_18 = get_type_max_level(this,param_2);
    }
    else {
      local_18 = (param_1 - *(int *)(this + 0xc4)) + 1;
    }
  }
  else {
    local_10 = get_second_growtype_max_level(this,param_2,param_3);
    if (local_10 == 0) {
      local_10 = get_type_max_level(this,param_2);
    }
    if ((param_4 < 1) || (local_10 < param_4)) {
      return 0;
    }
    local_18 = (param_1 - *(int *)(this + 0xc4)) + 1;
    if (local_10 < local_18) {
      local_18 = local_10;
    }
  }
  if (local_18 < param_4) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0xc4) + *(int *)(this + 200) * (param_4 + -1);
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 <= param_1);
  }
  return uVar3;
}
```
