# LoadDisJoint

`_ZN8DisJoint12LoadDisJointEv`

`DisJoint::LoadDisJoint()`

| 类 | 地址 |
|---|---|
| `DisJoint` | `0x0847300c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847300c  _ZN8DisJoint12LoadDisJointEv
#           DisJoint::LoadDisJoint()
# range [0x0847300c, 0x08473115]
0847300c +0x000:  push   %ebp
0847300d +0x001:  mov    %esp,%ebp
0847300f +0x003:  sub    $0x28,%esp
08473012 +0x006:  mov    0x8(%ebp),%eax
08473015 +0x009:  movl   $"Etc/Disjoint.etc",0x4(%esp)
0847301d +0x011:  mov    %eax,(%esp)
08473020 +0x014:  call   088e4d88 <_Z20importDisjointScriptP14DisjointScriptPKc>  ; importDisjointScript(DisjointScript*, char const*)
08473025 +0x019:  xor    $0x1,%eax
08473028 +0x01c:  test   %al,%al
0847302a +0x01e:  je     08473042 <+0x36>
0847302c +0x020:  movl   $"DisJoint Script Error: Etc/Disjoint.etc",(%esp)
08473033 +0x027:  call   0807e570 <_init+0xe68>
08473038 +0x02c:  mov    $0x0,%eax
0847303d +0x031:  jmp    08473114 <+0x108>
08473042 +0x036:  movl   $0x0,-0x10(%ebp)
08473049 +0x03d:  jmp    08473100 <+0xf4>
0847304e +0x042:  mov    0x8(%ebp),%eax
08473051 +0x045:  add    $0x30,%eax
08473054 +0x048:  movl   $0x0,0x4(%esp)
0847305c +0x050:  mov    %eax,(%esp)
0847305f +0x053:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
08473064 +0x058:  mov    (%eax),%eax
08473066 +0x05a:  mov    %eax,-0x14(%ebp)
08473069 +0x05d:  mov    -0x10(%ebp),%edx
0847306c +0x060:  mov    %edx,%eax
0847306e +0x062:  add    %eax,%eax
08473070 +0x064:  add    %edx,%eax
08473072 +0x066:  shl    $0x2,%eax
08473075 +0x069:  add    $0x620,%eax
0847307a +0x06e:  add    0x8(%ebp),%eax
0847307d +0x071:  lea    0x8(%eax),%edx
08473080 +0x074:  lea    -0x14(%ebp),%eax
08473083 +0x077:  mov    %eax,0x4(%esp)
08473087 +0x07b:  mov    %edx,(%esp)
0847308a +0x07e:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0847308f +0x083:  movl   $0x0,-0xc(%ebp)
08473096 +0x08a:  jmp    084730df <+0xd3>
08473098 +0x08c:  mov    -0xc(%ebp),%eax
0847309b +0x08f:  mov    -0x10(%ebp),%edx
0847309e +0x092:  add    $0x5c,%edx
084730a1 +0x095:  shl    $0x4,%edx
084730a4 +0x098:  add    0x8(%ebp),%edx
084730a7 +0x09b:  add    $0xc,%edx
084730aa +0x09e:  mov    %eax,0x4(%esp)
084730ae +0x0a2:  mov    %edx,(%esp)
084730b1 +0x0a5:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
084730b6 +0x0aa:  mov    %eax,%ecx
084730b8 +0x0ac:  mov    -0x10(%ebp),%edx
084730bb +0x0af:  mov    %edx,%eax
084730bd +0x0b1:  add    %eax,%eax
084730bf +0x0b3:  add    %edx,%eax
084730c1 +0x0b5:  shl    $0x2,%eax
084730c4 +0x0b8:  add    $0x620,%eax
084730c9 +0x0bd:  add    0x8(%ebp),%eax
084730cc +0x0c0:  add    $0x8,%eax
084730cf +0x0c3:  mov    %ecx,0x4(%esp)
084730d3 +0x0c7:  mov    %eax,(%esp)
084730d6 +0x0ca:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
084730db +0x0cf:  addl   $0x1,-0xc(%ebp)
084730df +0x0d3:  mov    -0x10(%ebp),%edx
084730e2 +0x0d6:  mov    0x8(%ebp),%eax
084730e5 +0x0d9:  add    $0x5c,%edx
084730e8 +0x0dc:  shl    $0x4,%edx
084730eb +0x0df:  add    %edx,%eax
084730ed +0x0e1:  add    $0x8,%eax
084730f0 +0x0e4:  mov    (%eax),%eax
084730f2 +0x0e6:  cmp    -0xc(%ebp),%eax
084730f5 +0x0e9:  setg   %al
084730f8 +0x0ec:  test   %al,%al
084730fa +0x0ee:  jne    08473098 <+0x8c>
084730fc +0x0f0:  addl   $0x1,-0x10(%ebp)
08473100 +0x0f4:  cmpl   $0x5,-0x10(%ebp)
08473104 +0x0f8:  setle  %al
08473107 +0x0fb:  test   %al,%al
08473109 +0x0fd:  jne    0847304e <+0x42>
0847310f +0x103:  mov    $0x1,%eax
08473114 +0x108:  leave
08473115 +0x109:  ret
```

## 反编译 C

```c
// DisJoint::LoadDisJoint @ 0x847300c

/* DisJoint::LoadDisJoint() */

undefined4 __thiscall DisJoint::LoadDisJoint(DisJoint *this)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_18;
  int local_14;
  uint local_10;
  
  cVar1 = importDisjointScript((DisjointScript *)this,"Etc/Disjoint.etc");
  if (cVar1 == '\x01') {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                                ((vector<int,std::allocator<int>> *)(this + 0x30),0);
      local_18 = *piVar3;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + local_14 * 0xc + 0x628),&local_18);
      for (local_10 = 0; (int)local_10 < *(int *)(this + (local_14 + 0x5c) * 0x10 + 8);
          local_10 = local_10 + 1) {
        piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)
                                   (this + (local_14 + 0x5c) * 0x10 + 0xc),local_10);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(this + local_14 * 0xc + 0x628),piVar3);
      }
    }
    uVar2 = 1;
  }
  else {
    puts("DisJoint Script Error: Etc/Disjoint.etc");
    uVar2 = 0;
  }
  return uVar2;
}
```
