# set_query

`_ZN10DbmwClient9set_queryEPKcz`

`DbmwClient::set_query(char const*, ...)`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x081204fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081204fa  _ZN10DbmwClient9set_queryEPKcz
#           DbmwClient::set_query(char const*, ...)
# range [0x081204fa, 0x081205e5]
081204fa +0x00:  push   %ebp
081204fb +0x01:  mov    %esp,%ebp
081204fd +0x03:  sub    $0x28,%esp
08120500 +0x06:  cmpl   $0x0,0xc(%ebp)
08120504 +0x0a:  jne    08120510 <+0x16>
08120506 +0x0c:  mov    $0x0,%eax
0812050b +0x11:  jmp    081205e4 <+0xea>
08120510 +0x16:  mov    0x8(%ebp),%eax
08120513 +0x19:  add    $0x34,%eax
08120516 +0x1c:  movl   $0x1001,0x8(%esp)
0812051e +0x24:  movl   $0x0,0x4(%esp)
08120526 +0x2c:  mov    %eax,(%esp)
08120529 +0x2f:  call   0807dcc0 <_init+0x5b8>
0812052e +0x34:  lea    0x10(%ebp),%eax
08120531 +0x37:  mov    %eax,-0xc(%ebp)
08120534 +0x3a:  mov    -0xc(%ebp),%eax
08120537 +0x3d:  mov    0x8(%ebp),%edx
0812053a +0x40:  add    $0x34,%edx
0812053d +0x43:  mov    %eax,0x8(%esp)
08120541 +0x47:  mov    0xc(%ebp),%eax
08120544 +0x4a:  mov    %eax,0x4(%esp)
08120548 +0x4e:  mov    %edx,(%esp)
0812054b +0x51:  call   0807d7d0 <_init+0xc8>
08120550 +0x56:  mov    0x8(%ebp),%eax
08120553 +0x59:  add    $0x34,%eax
08120556 +0x5c:  mov    %eax,(%esp)
08120559 +0x5f:  call   0807e3b0 <_init+0xca8>
0812055e +0x64:  mov    %eax,%edx
08120560 +0x66:  mov    0x8(%ebp),%eax
08120563 +0x69:  mov    %edx,0x1038(%eax)
08120569 +0x6f:  mov    0x8(%ebp),%eax
0812056c +0x72:  mov    0x1038(%eax),%eax
08120572 +0x78:  cmp    $0xfff,%eax
08120577 +0x7d:  jg     08120587 <+0x8d>
08120579 +0x7f:  mov    0x8(%ebp),%eax
0812057c +0x82:  mov    0x1038(%eax),%eax
08120582 +0x88:  cmp    $0x7,%eax
08120585 +0x8b:  jg     081205af <+0xb5>
08120587 +0x8d:  mov    0x8(%ebp),%eax
0812058a +0x90:  mov    0x1038(%eax),%eax
08120590 +0x96:  movl   $0x1000,0x8(%esp)
08120598 +0x9e:  mov    %eax,0x4(%esp)
0812059c +0xa2:  movl   $"QueryLength Size ERROR QUERY_SIZE-%d MAX_QUERY_SIZE-%d\n",(%esp)
081205a3 +0xa9:  call   0807db60 <_init+0x458>
081205a8 +0xae:  mov    $0x0,%eax
081205ad +0xb3:  jmp    081205e4 <+0xea>
081205af +0xb5:  mov    0x8(%ebp),%eax
081205b2 +0xb8:  add    $0x34,%eax
081205b5 +0xbb:  movl   $0x6,0x8(%esp)
081205bd +0xc3:  mov    %eax,0x4(%esp)
081205c1 +0xc7:  movl   $"select",(%esp)
081205c8 +0xce:  call   0807e120 <_init+0xa18>
081205cd +0xd3:  test   %eax,%eax
081205cf +0xd5:  jne    081205d9 <+0xdf>
081205d1 +0xd7:  mov    0x8(%ebp),%eax
081205d4 +0xda:  movb   $0x1,(%eax)
081205d7 +0xdd:  jmp    081205df <+0xe5>
081205d9 +0xdf:  mov    0x8(%ebp),%eax
081205dc +0xe2:  movb   $0x0,(%eax)
081205df +0xe5:  mov    $0x1,%eax
081205e4 +0xea:  leave
081205e5 +0xeb:  ret
```

## 反编译 C

```c
// DbmwClient::set_query @ 0x81204fa

/* DbmwClient::set_query(char const*, ...) */

undefined4 __thiscall DbmwClient::set_query(DbmwClient *this,char *param_1,...)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    memset(this + 0x34,0,0x1001);
    vsprintf((char *)(this + 0x34),param_1,&stack0x0000000c);
    sVar2 = strlen((char *)(this + 0x34));
    *(size_t *)(this + 0x1038) = sVar2;
    if ((*(int *)(this + 0x1038) < 0x1000) && (7 < *(int *)(this + 0x1038))) {
      iVar3 = strncasecmp("select",(char *)(this + 0x34),6);
      if (iVar3 == 0) {
        *this = (DbmwClient)0x1;
      }
      else {
        *this = (DbmwClient)0x0;
      }
      uVar1 = 1;
    }
    else {
      printf("QueryLength Size ERROR QUERY_SIZE-%d MAX_QUERY_SIZE-%d\n",
             *(undefined4 *)(this + 0x1038),0x1000);
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
