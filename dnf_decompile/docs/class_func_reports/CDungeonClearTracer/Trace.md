# Trace

`_ZN19CDungeonClearTracer5TraceEPKc`

`CDungeonClearTracer::Trace(char const*)`

| 类 | 地址 |
|---|---|
| `CDungeonClearTracer` | `0x082fed32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fed32  _ZN19CDungeonClearTracer5TraceEPKc
#           CDungeonClearTracer::Trace(char const*)
# range [0x082fed32, 0x082fee03]
082fed32 +0x00:  push   %ebp
082fed33 +0x01:  mov    %esp,%ebp
082fed35 +0x03:  push   %edi
082fed36 +0x04:  push   %esi
082fed37 +0x05:  push   %ebx
082fed38 +0x06:  sub    $0x5c,%esp
082fed3b +0x09:  mov    0x8(%ebp),%eax
082fed3e +0x0c:  mov    %eax,(%esp)
082fed41 +0x0f:  call   082feea2 <_ZN19CDungeonClearTracer12IsKilledBossEv>  ; CDungeonClearTracer::IsKilledBoss()
082fed46 +0x14:  test   %al,%al
082fed48 +0x16:  je     082fedf0 <+0xbe>
082fed4e +0x1c:  mov    0x8(%ebp),%eax
082fed51 +0x1f:  movzbl 0x15(%eax),%eax
082fed55 +0x23:  movzbl %al,%eax
082fed58 +0x26:  mov    %eax,-0x38(%ebp)
082fed5b +0x29:  mov    0x8(%ebp),%eax
082fed5e +0x2c:  movzbl 0x14(%eax),%eax
082fed62 +0x30:  movzbl %al,%eax
082fed65 +0x33:  mov    %eax,-0x34(%ebp)
082fed68 +0x36:  mov    0x8(%ebp),%eax
082fed6b +0x39:  mov    0xc(%eax),%eax
082fed6e +0x3c:  mov    %eax,-0x30(%ebp)
082fed71 +0x3f:  mov    0x8(%ebp),%eax
082fed74 +0x42:  mov    0x10(%eax),%eax
082fed77 +0x45:  mov    %eax,-0x2c(%ebp)
082fed7a +0x48:  mov    0x8(%ebp),%eax
082fed7d +0x4b:  mov    0x4(%eax),%edi
082fed80 +0x4e:  mov    0x8(%ebp),%eax
082fed83 +0x51:  mov    0x8(%eax),%esi
082fed86 +0x54:  mov    0x8(%ebp),%eax
082fed89 +0x57:  mov    (%eax),%ebx
082fed8b +0x59:  movl   $0x0,0xc(%esp)
082fed93 +0x61:  movl   $0x108,0x8(%esp)
082fed9b +0x69:  movl   $&_ZZN19CDungeonClearTracer5TraceEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
082feda3 +0x71:  lea    -0x28(%ebp),%eax
082feda6 +0x74:  mov    %eax,(%esp)
082feda9 +0x77:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fedae +0x7c:  mov    -0x38(%ebp),%eax
082fedb1 +0x7f:  mov    %eax,0x24(%esp)
082fedb5 +0x83:  mov    -0x34(%ebp),%eax
082fedb8 +0x86:  mov    %eax,0x20(%esp)
082fedbc +0x8a:  mov    -0x30(%ebp),%eax
082fedbf +0x8d:  mov    %eax,0x1c(%esp)
082fedc3 +0x91:  mov    -0x2c(%ebp),%eax
082fedc6 +0x94:  mov    %eax,0x18(%esp)
082fedca +0x98:  mov    %edi,0x14(%esp)
082fedce +0x9c:  mov    %esi,0x10(%esp)
082fedd2 +0xa0:  mov    %ebx,0xc(%esp)
082fedd6 +0xa4:  mov    0xc(%ebp),%eax
082fedd9 +0xa7:  mov    %eax,0x8(%esp)
082feddd +0xab:  movl   $"FUNC(%s) Map ID(%d), Boss(%d/%d), Monster(%d/%d) Cleared(%d), End Point(%d)\n",0x4(%esp)
082fede5 +0xb3:  lea    -0x28(%ebp),%eax
082fede8 +0xb6:  mov    %eax,(%esp)
082fedeb +0xb9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fedf0 +0xbe:  mov    0x8(%ebp),%eax
082fedf3 +0xc1:  mov    %eax,(%esp)
082fedf6 +0xc4:  call   082feece <_ZN19CDungeonClearTracer5ResetEv>  ; CDungeonClearTracer::Reset()
082fedfb +0xc9:  add    $0x5c,%esp
082fedfe +0xcc:  pop    %ebx
082fedff +0xcd:  pop    %esi
082fee00 +0xce:  pop    %edi
082fee01 +0xcf:  pop    %ebp
082fee02 +0xd0:  ret
082fee03 +0xd1:  nop
```

## 反编译 C

```c
// CDungeonClearTracer::Trace @ 0x82fed32

/* CDungeonClearTracer::Trace(char const*) */

void __thiscall CDungeonClearTracer::Trace(CDungeonClearTracer *this,char *param_1)

{
  CDungeonClearTracer CVar1;
  CDungeonClearTracer CVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  cMyTrace local_2c [28];
  
  cVar8 = IsKilledBoss(this);
  if (cVar8 != '\0') {
    CVar1 = this[0x15];
    CVar2 = this[0x14];
    uVar3 = *(undefined4 *)(this + 0xc);
    uVar4 = *(undefined4 *)(this + 0x10);
    uVar5 = *(undefined4 *)(this + 4);
    uVar6 = *(undefined4 *)(this + 8);
    uVar7 = *(undefined4 *)this;
    cMyTrace::cMyTrace(local_2c,"void CDungeonClearTracer::Trace(const char*)",0x108,0);
    cMyTrace::operator()
              (local_2c,
               "FUNC(%s) Map ID(%d), Boss(%d/%d), Monster(%d/%d) Cleared(%d), End Point(%d)\n",
               param_1,uVar7,uVar6,uVar5,uVar4,uVar3,(uint)(byte)CVar2,(uint)(byte)CVar1);
  }
  Reset(this);
  return;
}
```
