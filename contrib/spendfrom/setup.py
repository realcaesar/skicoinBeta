from distutils.core import setup
setup(name='sysspendfrom',
      version='1.0',
      description='Command-line utility for skicoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@skicoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
