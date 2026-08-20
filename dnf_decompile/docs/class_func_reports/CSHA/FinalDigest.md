# FinalDigest

`_ZN4CSHA11FinalDigestEPc`

`CSHA::FinalDigest(char*)`

| 类 | 地址 |
|---|---|
| `CSHA` | `0x080bb85e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080bb85e  _ZN4CSHA11FinalDigestEPc
#           CSHA::FinalDigest(char*)
# range [0x080bb85e, 0x080bb995]
080bb85e +0x000:  push   %ebp
080bb85f +0x001:  mov    %esp,%ebp
080bb861 +0x003:  sub    $0x28,%esp
080bb864 +0x006:  mov    0x8(%ebp),%eax
080bb867 +0x009:  movzbl 0x68(%eax),%eax
080bb86b +0x00d:  xor    $0x1,%eax
080bb86e +0x010:  test   %al,%al
080bb870 +0x012:  je     080bb87c <+0x1e>
080bb872 +0x014:  mov    $0x70000008,%eax
080bb877 +0x019:  jmp    080bb993 <+0x135>
080bb87c +0x01e:  mov    0x8(%ebp),%eax
080bb87f +0x021:  mov    0x20(%eax),%eax
080bb882 +0x024:  shr    $0x3,%eax
080bb885 +0x027:  and    $0x3f,%eax
080bb888 +0x02a:  mov    %eax,-0x14(%ebp)
080bb88b +0x02d:  mov    0x8(%ebp),%eax
080bb88e +0x030:  add    $0x28,%eax
080bb891 +0x033:  add    -0x14(%ebp),%eax
080bb894 +0x036:  mov    %eax,-0x10(%ebp)
080bb897 +0x039:  mov    -0x10(%ebp),%eax
080bb89a +0x03c:  movb   $0x80,(%eax)
080bb89d +0x03f:  addl   $0x1,-0x10(%ebp)
080bb8a1 +0x043:  mov    $0x3f,%eax
080bb8a6 +0x048:  sub    -0x14(%ebp),%eax
080bb8a9 +0x04b:  mov    %eax,-0x14(%ebp)
080bb8ac +0x04e:  cmpl   $0x7,-0x14(%ebp)
080bb8b0 +0x052:  ja     080bb8f7 <+0x99>
080bb8b2 +0x054:  mov    -0x14(%ebp),%eax
080bb8b5 +0x057:  mov    %eax,0x8(%esp)
080bb8b9 +0x05b:  movl   $0x0,0x4(%esp)
080bb8c1 +0x063:  mov    -0x10(%ebp),%eax
080bb8c4 +0x066:  mov    %eax,(%esp)
080bb8c7 +0x069:  call   0807dcc0 <_init+0x5b8>
080bb8cc +0x06e:  mov    0x8(%ebp),%eax
080bb8cf +0x071:  mov    %eax,(%esp)
080bb8d2 +0x074:  call   080bb9e4 <_ZN4CSHA9TransformEv>  ; CSHA::Transform()
080bb8d7 +0x079:  mov    0x8(%ebp),%eax
080bb8da +0x07c:  add    $0x28,%eax
080bb8dd +0x07f:  movl   $0x38,0x8(%esp)
080bb8e5 +0x087:  movl   $0x0,0x4(%esp)
080bb8ed +0x08f:  mov    %eax,(%esp)
080bb8f0 +0x092:  call   0807dcc0 <_init+0x5b8>
080bb8f5 +0x097:  jmp    080bb914 <+0xb6>
080bb8f7 +0x099:  mov    -0x14(%ebp),%eax
080bb8fa +0x09c:  sub    $0x8,%eax
080bb8fd +0x09f:  mov    %eax,0x8(%esp)
080bb901 +0x0a3:  movl   $0x0,0x4(%esp)
080bb909 +0x0ab:  mov    -0x10(%ebp),%eax
080bb90c +0x0ae:  mov    %eax,(%esp)
080bb90f +0x0b1:  call   0807dcc0 <_init+0x5b8>
080bb914 +0x0b6:  mov    0x8(%ebp),%eax
080bb917 +0x0b9:  lea    0x60(%eax),%edx
080bb91a +0x0bc:  mov    0x8(%ebp),%eax
080bb91d +0x0bf:  add    $0x24,%eax
080bb920 +0x0c2:  mov    %edx,0x4(%esp)
080bb924 +0x0c6:  mov    %eax,(%esp)
080bb927 +0x0c9:  call   080bd92a <_ZN4CSHA9TransformEv+0x1f46>  ; CSHA::Transform()+0x1f46
080bb92c +0x0ce:  mov    0x8(%ebp),%eax
080bb92f +0x0d1:  lea    0x64(%eax),%edx
080bb932 +0x0d4:  mov    0x8(%ebp),%eax
080bb935 +0x0d7:  add    $0x20,%eax
080bb938 +0x0da:  mov    %edx,0x4(%esp)
080bb93c +0x0de:  mov    %eax,(%esp)
080bb93f +0x0e1:  call   080bd92a <_ZN4CSHA9TransformEv+0x1f46>  ; CSHA::Transform()+0x1f46
080bb944 +0x0e6:  mov    0x8(%ebp),%eax
080bb947 +0x0e9:  mov    %eax,(%esp)
080bb94a +0x0ec:  call   080bb9e4 <_ZN4CSHA9TransformEv>  ; CSHA::Transform()
080bb94f +0x0f1:  movl   $0x0,-0xc(%ebp)
080bb956 +0x0f8:  jmp    080bb978 <+0x11a>
080bb958 +0x0fa:  mov    0xc(%ebp),%edx
080bb95b +0x0fd:  mov    -0xc(%ebp),%eax
080bb95e +0x100:  shl    $0x2,%eax
080bb961 +0x103:  add    0x8(%ebp),%eax
080bb964 +0x106:  mov    %edx,0x4(%esp)
080bb968 +0x10a:  mov    %eax,(%esp)
080bb96b +0x10d:  call   080bd92a <_ZN4CSHA9TransformEv+0x1f46>  ; CSHA::Transform()+0x1f46
080bb970 +0x112:  addl   $0x1,-0xc(%ebp)
080bb974 +0x116:  addl   $0x4,0xc(%ebp)
080bb978 +0x11a:  cmpl   $0x7,-0xc(%ebp)
080bb97c +0x11e:  setle  %al
080bb97f +0x121:  test   %al,%al
080bb981 +0x123:  jne    080bb958 <+0xfa>
080bb983 +0x125:  mov    0x8(%ebp),%eax
080bb986 +0x128:  mov    %eax,(%esp)
080bb989 +0x12b:  call   080bb996 <_ZN4CSHA5ResetEv>  ; CSHA::Reset()
080bb98e +0x130:  mov    $0x6fffffff,%eax
080bb993 +0x135:  leave
080bb994 +0x136:  ret
080bb995 +0x137:  nop
```

## 反编译 C

```c
// CSHA::FinalDigest @ 0x80bb85e

/* CSHA::FinalDigest(char*) */

undefined4 __thiscall CSHA::FinalDigest(CSHA *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  CSHA *pCVar4;
  int local_10;
  
  if (this[0x68] == (CSHA)0x1) {
    uVar3 = *(uint *)(this + 0x20) >> 3 & 0x3f;
    pCVar4 = this + uVar3 + 0x28;
    *pCVar4 = (CSHA)0x80;
    iVar1 = -uVar3;
    uVar3 = iVar1 + 0x3f;
    if (uVar3 < 8) {
      memset(pCVar4 + 1,0,uVar3);
      Transform(this);
      memset(this + 0x28,0,0x38);
    }
    else {
      memset(pCVar4 + 1,0,iVar1 + 0x37);
    }
    Word2Bytes((uint *)(this + 0x24),(uchar *)(this + 0x60));
    Word2Bytes((uint *)(this + 0x20),(uchar *)(this + 100));
    Transform(this);
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      Word2Bytes((uint *)(this + local_10 * 4),(uchar *)param_1);
      param_1 = param_1 + 4;
    }
    Reset(this);
    uVar2 = 0x6fffffff;
  }
  else {
    uVar2 = 0x70000008;
  }
  return uVar2;
}
```
