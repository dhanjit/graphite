from distutils.core import setup

setup(
	name='graphite',
	version='1.00',
	packages=['build.lib.src', 'build.lib.src.ui', 'build.lib.src.ui.input', 'build.lib.src.ui.input.tableinput',
	          'build.lib.src.ui.canvas', 'build.lib.src.ui.viewport', 'build.lib.src.ui.aggregator',
	          'build.lib.src.model', 'build.lib.src.session', 'build.lib.src.inputhandler',
	          'build.lib.src.inputhandler.parser', 'build.lib.src.inputhandler.filehandler', 'tests', 'graphite',
	          'graphite.ui', 'graphite.ui.input', 'graphite.ui.input.tableinput', 'graphite.ui.canvas',
	          'graphite.ui.viewport', 'graphite.ui.aggregator', 'graphite.model', 'graphite.session',
	          'graphite.controller', 'graphite.inputhandler', 'graphite.inputhandler.parser',
	          'graphite.inputhandler.filehandler'],
	url='',
	license='open',
	author='archen',
	author_email='dhanjitdas1@gmail.com',
	description='graphite - graph plotting application'
)
