# KillMonster

`_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason`

`cUserHistoryLog::KillMonster(int, unsigned int, unsigned int, unsigned short, unsigned short, MSG_MONSTER_DIE const&, char, bool, int, int, eExpAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086851ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086851ac  _ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason
#           cUserHistoryLog::KillMonster(int, unsigned int, unsigned int, unsigned short, unsigned short, MSG_MONSTER_DIE const&, char, bool, int, int, eExpAddReason)
# range [0x086851ac, 0x0868531f]
086851ac +0x000:  push   %ebp
086851ad +0x001:  mov    %esp,%ebp
086851af +0x003:  push   %edi
086851b0 +0x004:  push   %esi
086851b1 +0x005:  push   %ebx
086851b2 +0x006:  sub    $0xac,%esp
086851b8 +0x00c:  mov    0x18(%ebp),%ebx
086851bb +0x00f:  mov    0x1c(%ebp),%ecx
086851be +0x012:  mov    0x24(%ebp),%edx
086851c1 +0x015:  mov    0x28(%ebp),%eax
086851c4 +0x018:  mov    %bx,-0x1c(%ebp)
086851c8 +0x01c:  mov    %cx,-0x20(%ebp)
086851cc +0x020:  mov    %dl,-0x24(%ebp)
086851cf +0x023:  mov    %al,-0x28(%ebp)
086851d2 +0x026:  mov    0x34(%ebp),%eax
086851d5 +0x029:  mov    %eax,-0x54(%ebp)
086851d8 +0x02c:  cmpb   $0x0,-0x28(%ebp)
086851dc +0x030:  je     086851e5 <+0x39>
086851de +0x032:  mov    $0x1,%esi
086851e3 +0x037:  jmp    086851ea <+0x3e>
086851e5 +0x039:  mov    $0x0,%esi
086851ea +0x03e:  mov    0x20(%ebp),%eax
086851ed +0x041:  movzwl 0xa3d(%eax),%eax
086851f4 +0x048:  cwtl
086851f5 +0x049:  mov    %eax,-0x50(%ebp)
086851f8 +0x04c:  mov    0x20(%ebp),%eax
086851fb +0x04f:  movzwl 0xa3b(%eax),%eax
08685202 +0x056:  cwtl
08685203 +0x057:  mov    %eax,-0x4c(%ebp)
08685206 +0x05a:  mov    0x20(%ebp),%eax
08685209 +0x05d:  movzwl 0xa39(%eax),%eax
08685210 +0x064:  cwtl
08685211 +0x065:  mov    %eax,-0x48(%ebp)
08685214 +0x068:  mov    0x20(%ebp),%eax
08685217 +0x06b:  movzwl 0xa37(%eax),%eax
0868521e +0x072:  cwtl
0868521f +0x073:  mov    %eax,-0x44(%ebp)
08685222 +0x076:  mov    0x20(%ebp),%eax
08685225 +0x079:  movzwl 0xa35(%eax),%eax
0868522c +0x080:  cwtl
0868522d +0x081:  mov    %eax,-0x40(%ebp)
08685230 +0x084:  movsbl -0x24(%ebp),%eax
08685234 +0x088:  mov    %eax,-0x3c(%ebp)
08685237 +0x08b:  mov    0x20(%ebp),%eax
0868523a +0x08e:  mov    0xa2d(%eax),%eax
08685240 +0x094:  mov    %eax,-0x38(%ebp)
08685243 +0x097:  mov    0x20(%ebp),%eax
08685246 +0x09a:  mov    0xa31(%eax),%eax
0868524c +0x0a0:  mov    %eax,-0x34(%ebp)
0868524f +0x0a3:  mov    0x20(%ebp),%eax
08685252 +0x0a6:  movzwl 0xa2b(%eax),%eax
08685259 +0x0ad:  cwtl
0868525a +0x0ae:  mov    %eax,-0x30(%ebp)
0868525d +0x0b1:  mov    0x20(%ebp),%eax
08685260 +0x0b4:  movzwl 0xa29(%eax),%eax
08685267 +0x0bb:  cwtl
08685268 +0x0bc:  mov    %eax,-0x2c(%ebp)
0868526b +0x0bf:  mov    0x20(%ebp),%eax
0868526e +0x0c2:  movzbl 0xa22(%eax),%eax
08685275 +0x0c9:  movzbl %al,%edi
08685278 +0x0cc:  movzwl -0x20(%ebp),%ebx
0868527c +0x0d0:  movzwl -0x1c(%ebp),%ecx
08685280 +0x0d4:  mov    0x8(%ebp),%eax
08685283 +0x0d7:  mov    (%eax),%edx
08685285 +0x0d9:  mov    -0x54(%ebp),%eax
08685288 +0x0dc:  mov    %eax,0x54(%esp)
0868528c +0x0e0:  mov    0x30(%ebp),%eax
0868528f +0x0e3:  mov    %eax,0x50(%esp)
08685293 +0x0e7:  mov    0x2c(%ebp),%eax
08685296 +0x0ea:  mov    %eax,0x4c(%esp)
0868529a +0x0ee:  mov    %esi,0x48(%esp)
0868529e +0x0f2:  mov    -0x50(%ebp),%eax
086852a1 +0x0f5:  mov    %eax,0x44(%esp)
086852a5 +0x0f9:  mov    -0x4c(%ebp),%eax
086852a8 +0x0fc:  mov    %eax,0x40(%esp)
086852ac +0x100:  mov    -0x48(%ebp),%eax
086852af +0x103:  mov    %eax,0x3c(%esp)
086852b3 +0x107:  mov    -0x44(%ebp),%eax
086852b6 +0x10a:  mov    %eax,0x38(%esp)
086852ba +0x10e:  mov    -0x40(%ebp),%eax
086852bd +0x111:  mov    %eax,0x34(%esp)
086852c1 +0x115:  mov    -0x3c(%ebp),%eax
086852c4 +0x118:  mov    %eax,0x30(%esp)
086852c8 +0x11c:  mov    -0x38(%ebp),%eax
086852cb +0x11f:  mov    %eax,0x2c(%esp)
086852cf +0x123:  mov    -0x34(%ebp),%eax
086852d2 +0x126:  mov    %eax,0x28(%esp)
086852d6 +0x12a:  mov    -0x30(%ebp),%eax
086852d9 +0x12d:  mov    %eax,0x24(%esp)
086852dd +0x131:  mov    -0x2c(%ebp),%eax
086852e0 +0x134:  mov    %eax,0x20(%esp)
086852e4 +0x138:  mov    %edi,0x1c(%esp)
086852e8 +0x13c:  mov    %ebx,0x18(%esp)
086852ec +0x140:  mov    %ecx,0x14(%esp)
086852f0 +0x144:  mov    0x14(%ebp),%eax
086852f3 +0x147:  mov    %eax,0x10(%esp)
086852f7 +0x14b:  mov    0x10(%ebp),%eax
086852fa +0x14e:  mov    %eax,0xc(%esp)
086852fe +0x152:  mov    0xc(%ebp),%eax
08685301 +0x155:  mov    %eax,0x8(%esp)
08685305 +0x159:  movl   $"KillMob,%d,%d,%d, (%d:%d),%d, (%d:%d),%d,%d,%d, (%d:%d),%d,%d,%d,%d,%d,%d,%d",0x4(%esp)
0868530d +0x161:  mov    %edx,(%esp)
08685310 +0x164:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685315 +0x169:  add    $0xac,%esp
0868531b +0x16f:  pop    %ebx
0868531c +0x170:  pop    %esi
0868531d +0x171:  pop    %edi
0868531e +0x172:  pop    %ebp
0868531f +0x173:  ret
```

## 反编译 C

```c
// cUserHistoryLog::KillMonster @ 0x86851ac

/* cUserHistoryLog::KillMonster(int, unsigned int, unsigned int, unsigned short, unsigned short,
   MSG_MONSTER_DIE const&, char, bool, int, int, eExpAddReason) */

void __thiscall
cUserHistoryLog::KillMonster
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          uint param_4,uint param_5,int param_6,char param_7,char param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_12)

{
  CUser::LogHistory(*(CUser **)this,
                    "KillMob,%d,%d,%d, (%d:%d),%d, (%d:%d),%d,%d,%d, (%d:%d),%d,%d,%d,%d,%d,%d,%d",
                    param_1,param_2,param_3,param_4 & 0xffff,param_5 & 0xffff,
                    (uint)*(byte *)(param_6 + 0xa22),(int)*(short *)(param_6 + 0xa29),
                    (int)*(short *)(param_6 + 0xa2b),*(undefined4 *)(param_6 + 0xa31),
                    *(undefined4 *)(param_6 + 0xa2d),(int)param_7,(int)*(short *)(param_6 + 0xa35),
                    (int)*(short *)(param_6 + 0xa37),(int)*(short *)(param_6 + 0xa39),
                    (int)*(short *)(param_6 + 0xa3b),(int)*(short *)(param_6 + 0xa3d),
                    (uint)(param_8 != '\0'),param_9,param_10,param_12);
  return;
}
```
