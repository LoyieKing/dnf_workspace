# checkRenewTopRecord

`_ZN8WongWork18CDeathTowerRanking19checkRenewTopRecordEjjj`

`WongWork::CDeathTowerRanking::checkRenewTopRecord(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468290  _ZN8WongWork18CDeathTowerRanking19checkRenewTopRecordEjjj
#           WongWork::CDeathTowerRanking::checkRenewTopRecord(unsigned int, unsigned int, unsigned int)
# range [0x08468290, 0x084682fd]
08468290 +0x00:  push   %ebp
08468291 +0x01:  mov    %esp,%ebp
08468293 +0x03:  sub    $0xb8,%esp
08468299 +0x09:  mov    0xc(%ebp),%eax
0846829c +0x0c:  mov    0x8(%ebp),%edx
0846829f +0x0f:  imul   $0x390,%eax,%eax
084682a5 +0x15:  lea    (%edx,%eax,1),%eax
084682a8 +0x18:  add    $0x128,%eax
084682ad +0x1d:  movzbl (%eax),%eax
084682b0 +0x20:  xor    $0x1,%eax
084682b3 +0x23:  test   %al,%al
084682b5 +0x25:  je     084682be <+0x2e>
084682b7 +0x27:  mov    $0x0,%eax
084682bc +0x2c:  jmp    084682fb <+0x6b>
084682be +0x2e:  lea    -0xa0(%ebp),%eax
084682c4 +0x34:  mov    %eax,(%esp)
084682c7 +0x37:  call   082a76c0 <_GLOBAL__I__ZN4CLog5this_E+0x3ae7>  ; global constructors keyed to CLog::this_+0x3ae7
084682cc +0x3c:  mov    0x14(%ebp),%eax
084682cf +0x3f:  mov    %eax,-0x14(%ebp)
084682d2 +0x42:  mov    0x10(%ebp),%eax
084682d5 +0x45:  mov    %eax,-0x18(%ebp)
084682d8 +0x48:  mov    0xc(%ebp),%eax
084682db +0x4b:  imul   $0x390,%eax,%eax
084682e1 +0x51:  add    $0x98,%eax
084682e6 +0x56:  add    0x8(%ebp),%eax
084682e9 +0x59:  mov    %eax,0x4(%esp)
084682ed +0x5d:  lea    -0xa0(%ebp),%eax
084682f3 +0x63:  mov    %eax,(%esp)
084682f6 +0x66:  call   08469ce4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x3c7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x3c7
084682fb +0x6b:  leave
084682fc +0x6c:  ret
084682fd +0x6d:  nop
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::checkRenewTopRecord @ 0x8468290

/* WongWork::CDeathTowerRanking::checkRenewTopRecord(unsigned int, unsigned int, unsigned int) */

undefined4 __thiscall
WongWork::CDeathTowerRanking::checkRenewTopRecord
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  stBestRecord_t local_a4 [136];
  uint local_1c;
  uint local_18;
  
  if (this[param_1 * 0x390 + 0x128] == (CDeathTowerRanking)0x1) {
    stBestRecord_t::stBestRecord_t(local_a4);
    local_18 = param_3;
    local_1c = param_2;
    uVar1 = stBestRecord_t::operator>(local_a4,(stBestRecord_t *)(this + param_1 * 0x390 + 0x98));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
