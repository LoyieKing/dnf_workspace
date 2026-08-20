# AddData

`_ZN4CSHA7AddDataEPKci`

`CSHA::AddData(char const*, int)`

| 类 | 地址 |
|---|---|
| `CSHA` | `0x080bb708` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080bb708  _ZN4CSHA7AddDataEPKci
#           CSHA::AddData(char const*, int)
# range [0x080bb708, 0x080bb85d]
080bb708 +0x000:  push   %ebp
080bb709 +0x001:  mov    %esp,%ebp
080bb70b +0x003:  sub    $0x28,%esp
080bb70e +0x006:  cmpl   $0x0,0x10(%ebp)
080bb712 +0x00a:  jg     080bb71e <+0x16>
080bb714 +0x00c:  mov    $0x70000007,%eax
080bb719 +0x011:  jmp    080bb85b <+0x153>
080bb71e +0x016:  mov    0x8(%ebp),%eax
080bb721 +0x019:  mov    0x20(%eax),%eax
080bb724 +0x01c:  mov    %eax,-0x10(%ebp)
080bb727 +0x01f:  mov    0x10(%ebp),%eax
080bb72a +0x022:  shl    $0x3,%eax
080bb72d +0x025:  mov    %eax,%edx
080bb72f +0x027:  add    -0x10(%ebp),%edx
080bb732 +0x02a:  mov    0x8(%ebp),%eax
080bb735 +0x02d:  mov    %edx,0x20(%eax)
080bb738 +0x030:  mov    0x8(%ebp),%eax
080bb73b +0x033:  mov    0x20(%eax),%eax
080bb73e +0x036:  cmp    -0x10(%ebp),%eax
080bb741 +0x039:  setb   %al
080bb744 +0x03c:  test   %al,%al
080bb746 +0x03e:  je     080bb757 <+0x4f>
080bb748 +0x040:  mov    0x8(%ebp),%eax
080bb74b +0x043:  mov    0x24(%eax),%eax
080bb74e +0x046:  lea    0x1(%eax),%edx
080bb751 +0x049:  mov    0x8(%ebp),%eax
080bb754 +0x04c:  mov    %edx,0x24(%eax)
080bb757 +0x04f:  mov    0x8(%ebp),%eax
080bb75a +0x052:  mov    0x24(%eax),%edx
080bb75d +0x055:  mov    0x10(%ebp),%eax
080bb760 +0x058:  sar    $0x1d,%eax
080bb763 +0x05b:  add    %eax,%edx
080bb765 +0x05d:  mov    0x8(%ebp),%eax
080bb768 +0x060:  mov    %edx,0x24(%eax)
080bb76b +0x063:  mov    -0x10(%ebp),%eax
080bb76e +0x066:  shr    $0x3,%eax
080bb771 +0x069:  and    $0x3f,%eax
080bb774 +0x06c:  mov    %eax,-0x10(%ebp)
080bb777 +0x06f:  cmpl   $0x0,-0x10(%ebp)
080bb77b +0x073:  je     080bb828 <+0x120>
080bb781 +0x079:  mov    0x8(%ebp),%eax
080bb784 +0x07c:  add    $0x28,%eax
080bb787 +0x07f:  add    -0x10(%ebp),%eax
080bb78a +0x082:  mov    %eax,-0xc(%ebp)
080bb78d +0x085:  mov    $0x40,%eax
080bb792 +0x08a:  sub    -0x10(%ebp),%eax
080bb795 +0x08d:  mov    %eax,-0x10(%ebp)
080bb798 +0x090:  mov    0x10(%ebp),%eax
080bb79b +0x093:  cmp    -0x10(%ebp),%eax
080bb79e +0x096:  jae    080bb7c3 <+0xbb>
080bb7a0 +0x098:  mov    0x10(%ebp),%eax
080bb7a3 +0x09b:  mov    %eax,0x8(%esp)
080bb7a7 +0x09f:  mov    0xc(%ebp),%eax
080bb7aa +0x0a2:  mov    %eax,0x4(%esp)
080bb7ae +0x0a6:  mov    -0xc(%ebp),%eax
080bb7b1 +0x0a9:  mov    %eax,(%esp)
080bb7b4 +0x0ac:  call   0807d8a0 <_init+0x198>
080bb7b9 +0x0b1:  mov    $0x6fffffff,%eax
080bb7be +0x0b6:  jmp    080bb85b <+0x153>
080bb7c3 +0x0bb:  mov    -0x10(%ebp),%eax
080bb7c6 +0x0be:  mov    %eax,0x8(%esp)
080bb7ca +0x0c2:  mov    0xc(%ebp),%eax
080bb7cd +0x0c5:  mov    %eax,0x4(%esp)
080bb7d1 +0x0c9:  mov    -0xc(%ebp),%eax
080bb7d4 +0x0cc:  mov    %eax,(%esp)
080bb7d7 +0x0cf:  call   0807d8a0 <_init+0x198>
080bb7dc +0x0d4:  mov    0x8(%ebp),%eax
080bb7df +0x0d7:  mov    %eax,(%esp)
080bb7e2 +0x0da:  call   080bb9e4 <_ZN4CSHA9TransformEv>  ; CSHA::Transform()
080bb7e7 +0x0df:  mov    -0x10(%ebp),%eax
080bb7ea +0x0e2:  add    %eax,0xc(%ebp)
080bb7ed +0x0e5:  mov    0x10(%ebp),%eax
080bb7f0 +0x0e8:  sub    -0x10(%ebp),%eax
080bb7f3 +0x0eb:  mov    %eax,0x10(%ebp)
080bb7f6 +0x0ee:  jmp    080bb828 <+0x120>
080bb7f8 +0x0f0:  mov    0x8(%ebp),%eax
080bb7fb +0x0f3:  lea    0x28(%eax),%edx
080bb7fe +0x0f6:  movl   $0x40,0x8(%esp)
080bb806 +0x0fe:  mov    0xc(%ebp),%eax
080bb809 +0x101:  mov    %eax,0x4(%esp)
080bb80d +0x105:  mov    %edx,(%esp)
080bb810 +0x108:  call   0807d8a0 <_init+0x198>
080bb815 +0x10d:  mov    0x8(%ebp),%eax
080bb818 +0x110:  mov    %eax,(%esp)
080bb81b +0x113:  call   080bb9e4 <_ZN4CSHA9TransformEv>  ; CSHA::Transform()
080bb820 +0x118:  addl   $0x40,0xc(%ebp)
080bb824 +0x11c:  subl   $0x40,0x10(%ebp)
080bb828 +0x120:  cmpl   $0x3f,0x10(%ebp)
080bb82c +0x124:  setg   %al
080bb82f +0x127:  test   %al,%al
080bb831 +0x129:  jne    080bb7f8 <+0xf0>
080bb833 +0x12b:  mov    0x10(%ebp),%eax
080bb836 +0x12e:  mov    0x8(%ebp),%edx
080bb839 +0x131:  add    $0x28,%edx
080bb83c +0x134:  mov    %eax,0x8(%esp)
080bb840 +0x138:  mov    0xc(%ebp),%eax
080bb843 +0x13b:  mov    %eax,0x4(%esp)
080bb847 +0x13f:  mov    %edx,(%esp)
080bb84a +0x142:  call   0807d8a0 <_init+0x198>
080bb84f +0x147:  mov    0x8(%ebp),%eax
080bb852 +0x14a:  movb   $0x1,0x68(%eax)
080bb856 +0x14e:  mov    $0x6fffffff,%eax
080bb85b +0x153:  leave
080bb85c +0x154:  ret
080bb85d +0x155:  nop
```

## 反编译 C

```c
// CSHA::AddData @ 0x80bb708

/* CSHA::AddData(char const*, int) */

undefined4 __thiscall CSHA::AddData(CSHA *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint __n;
  
  if (param_2 < 1) {
    uVar1 = 0x70000007;
  }
  else {
    uVar2 = *(uint *)(this + 0x20);
    *(uint *)(this + 0x20) = param_2 * 8 + uVar2;
    if (*(uint *)(this + 0x20) < uVar2) {
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
    }
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + (param_2 >> 0x1d);
    uVar2 = uVar2 >> 3 & 0x3f;
    if (uVar2 != 0) {
      __n = 0x40 - uVar2;
      if ((uint)param_2 < __n) {
        memcpy(this + uVar2 + 0x28,param_1,param_2);
        return 0x6fffffff;
      }
      memcpy(this + uVar2 + 0x28,param_1,__n);
      Transform(this);
      param_1 = param_1 + __n;
      param_2 = param_2 - __n;
    }
    for (; 0x3f < param_2; param_2 = param_2 + -0x40) {
      memcpy(this + 0x28,param_1,0x40);
      Transform(this);
      param_1 = param_1 + 0x40;
    }
    memcpy(this + 0x28,param_1,param_2);
    this[0x68] = (CSHA)0x1;
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
