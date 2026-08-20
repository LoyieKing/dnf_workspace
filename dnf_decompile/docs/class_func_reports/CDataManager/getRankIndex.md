# getRankIndex

`_ZN12CDataManager12getRankIndexEi`

`CDataManager::getRankIndex(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083638c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083638c0  _ZN12CDataManager12getRankIndexEi
#           CDataManager::getRankIndex(int)
# range [0x083638c0, 0x083639c3]
083638c0 +0x000:  push   %ebp
083638c1 +0x001:  mov    %esp,%ebp
083638c3 +0x003:  mov    0x8(%ebp),%eax
083638c6 +0x006:  movzwl 0x512c(%eax),%eax
083638cd +0x00d:  movzwl %ax,%eax
083638d0 +0x010:  cmp    0xc(%ebp),%eax
083638d3 +0x013:  jg     083638e4 <+0x24>
083638d5 +0x015:  mov    0x8(%ebp),%eax
083638d8 +0x018:  movzwl 0x512c(%eax),%eax
083638df +0x01f:  jmp    083639c1 <+0x101>
083638e4 +0x024:  mov    0x8(%ebp),%eax
083638e7 +0x027:  movzwl 0x512e(%eax),%eax
083638ee +0x02e:  movzwl %ax,%eax
083638f1 +0x031:  cmp    0xc(%ebp),%eax
083638f4 +0x034:  jg     08363905 <+0x45>
083638f6 +0x036:  mov    0x8(%ebp),%eax
083638f9 +0x039:  movzwl 0x512e(%eax),%eax
08363900 +0x040:  jmp    083639c1 <+0x101>
08363905 +0x045:  mov    0x8(%ebp),%eax
08363908 +0x048:  movzwl 0x5130(%eax),%eax
0836390f +0x04f:  movzwl %ax,%eax
08363912 +0x052:  cmp    0xc(%ebp),%eax
08363915 +0x055:  jg     08363926 <+0x66>
08363917 +0x057:  mov    0x8(%ebp),%eax
0836391a +0x05a:  movzwl 0x5130(%eax),%eax
08363921 +0x061:  jmp    083639c1 <+0x101>
08363926 +0x066:  mov    0x8(%ebp),%eax
08363929 +0x069:  movzwl 0x5132(%eax),%eax
08363930 +0x070:  movzwl %ax,%eax
08363933 +0x073:  cmp    0xc(%ebp),%eax
08363936 +0x076:  jg     08363944 <+0x84>
08363938 +0x078:  mov    0x8(%ebp),%eax
0836393b +0x07b:  movzwl 0x5132(%eax),%eax
08363942 +0x082:  jmp    083639c1 <+0x101>
08363944 +0x084:  mov    0x8(%ebp),%eax
08363947 +0x087:  movzwl 0x5134(%eax),%eax
0836394e +0x08e:  movzwl %ax,%eax
08363951 +0x091:  cmp    0xc(%ebp),%eax
08363954 +0x094:  jg     08363962 <+0xa2>
08363956 +0x096:  mov    0x8(%ebp),%eax
08363959 +0x099:  movzwl 0x5134(%eax),%eax
08363960 +0x0a0:  jmp    083639c1 <+0x101>
08363962 +0x0a2:  mov    0x8(%ebp),%eax
08363965 +0x0a5:  movzwl 0x5136(%eax),%eax
0836396c +0x0ac:  movzwl %ax,%eax
0836396f +0x0af:  cmp    0xc(%ebp),%eax
08363972 +0x0b2:  jg     08363980 <+0xc0>
08363974 +0x0b4:  mov    0x8(%ebp),%eax
08363977 +0x0b7:  movzwl 0x5136(%eax),%eax
0836397e +0x0be:  jmp    083639c1 <+0x101>
08363980 +0x0c0:  mov    0x8(%ebp),%eax
08363983 +0x0c3:  movzwl 0x5138(%eax),%eax
0836398a +0x0ca:  movzwl %ax,%eax
0836398d +0x0cd:  cmp    0xc(%ebp),%eax
08363990 +0x0d0:  jg     0836399e <+0xde>
08363992 +0x0d2:  mov    0x8(%ebp),%eax
08363995 +0x0d5:  movzwl 0x5138(%eax),%eax
0836399c +0x0dc:  jmp    083639c1 <+0x101>
0836399e +0x0de:  mov    0x8(%ebp),%eax
083639a1 +0x0e1:  movzwl 0x513a(%eax),%eax
083639a8 +0x0e8:  movzwl %ax,%eax
083639ab +0x0eb:  cmp    0xc(%ebp),%eax
083639ae +0x0ee:  jg     083639bc <+0xfc>
083639b0 +0x0f0:  mov    0x8(%ebp),%eax
083639b3 +0x0f3:  movzwl 0x513a(%eax),%eax
083639ba +0x0fa:  jmp    083639c1 <+0x101>
083639bc +0x0fc:  mov    $0x0,%eax
083639c1 +0x101:  pop    %ebp
083639c2 +0x102:  ret
083639c3 +0x103:  nop
```

## 反编译 C

```c
// CDataManager::getRankIndex @ 0x83638c0

/* CDataManager::getRankIndex(int) */

undefined2 __thiscall CDataManager::getRankIndex(CDataManager *this,int param_1)

{
  undefined2 uVar1;
  
  if (param_1 < (int)(uint)*(ushort *)(this + 0x512c)) {
    if (param_1 < (int)(uint)*(ushort *)(this + 0x512e)) {
      if (param_1 < (int)(uint)*(ushort *)(this + 0x5130)) {
        if (param_1 < (int)(uint)*(ushort *)(this + 0x5132)) {
          if (param_1 < (int)(uint)*(ushort *)(this + 0x5134)) {
            if (param_1 < (int)(uint)*(ushort *)(this + 0x5136)) {
              if (param_1 < (int)(uint)*(ushort *)(this + 0x5138)) {
                if (param_1 < (int)(uint)*(ushort *)(this + 0x513a)) {
                  uVar1 = 0;
                }
                else {
                  uVar1 = *(undefined2 *)(this + 0x513a);
                }
              }
              else {
                uVar1 = *(undefined2 *)(this + 0x5138);
              }
            }
            else {
              uVar1 = *(undefined2 *)(this + 0x5136);
            }
          }
          else {
            uVar1 = *(undefined2 *)(this + 0x5134);
          }
        }
        else {
          uVar1 = *(undefined2 *)(this + 0x5132);
        }
      }
      else {
        uVar1 = *(undefined2 *)(this + 0x5130);
      }
    }
    else {
      uVar1 = *(undefined2 *)(this + 0x512e);
    }
  }
  else {
    uVar1 = *(undefined2 *)(this + 0x512c);
  }
  return uVar1;
}
```
